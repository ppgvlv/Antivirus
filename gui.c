#include <windows.h>
#include <stdio.h>
#include <stdbool.h>

#define ID_BUTTON1 1001
#define ID_BUTTON2 1002
#define ID_TEXTBOX 1003

LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
bool RunConsoleProgramAndCaptureOutput(const char* command, char* outputBuffer, size_t outputBufferSize);

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow)
{
    WNDCLASS wc = {0};

    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hInstance = hInst;
    wc.lpszClassName = "myWindowClass";
    wc.lpfnWndProc = WindowProcedure;

    if (!RegisterClass(&wc))
    {
        return -1;
    }

    HWND hwnd = CreateWindow("myWindowClass",
                             "My Window",
                              WS_OVERLAPPEDWINDOW | WS_VISIBLE,
                              100,
                              100,
                              500,
                              400,
                              NULL,
                              NULL,
                              NULL,
                              NULL);

    MSG msg = {0};

    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    static HWND hButton1;
    static HWND hButton2;
    static HWND hTextBox;

    switch (msg)
    {
        case WM_CREATE:
            hButton1 = CreateWindow("button",
                                    "Start scan",
                                    WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                                    10,
                                    10,
                                    100,
                                    30,
                                    hwnd,
                                    (HMENU)ID_BUTTON1,
                                    NULL,
                                    NULL);

            hButton2 = CreateWindow("button",
                                    "Stop scan",
                                    WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                                    120,
                                    10,
                                    100,
                                    30,
                                    hwnd,
                                    (HMENU)ID_BUTTON2,
                                    NULL,
                                    NULL);

            hTextBox = CreateWindow("edit",
                                    "",
                                    WS_CHILD | WS_VISIBLE | WS_BORDER | ES_MULTILINE | ES_AUTOVSCROLL | WS_VSCROLL,
                                    10,
                                    50,
                                    460,
                                    300,
                                    hwnd,
                                    (HMENU)ID_TEXTBOX,
                                    NULL,
                                    NULL);
            break;

        case WM_COMMAND:
            switch (LOWORD(wParam))
            {
                case ID_BUTTON1:
                    {
                        // Handle button 1 click
                        const char* command = "a.exe -w ..";
                        char outputBuffer[4096];

                        if (RunConsoleProgramAndCaptureOutput(command, outputBuffer, sizeof(outputBuffer)))
                        {
                            SetWindowText(hTextBox, outputBuffer);
                        }
                        else
                        {
                            SetWindowText(hTextBox, "Failed to run the console program and capture its output.");
                        }
                    }
                    break;
                case ID_BUTTON2:
                    // Handle button 2 click
                    SendMessage(hTextBox, EM_REPLACESEL, TRUE, (LPARAM)"Button 2 clicked!\r\n");
                    break;
            }
            break;

        case WM_DESTROY:
            PostQuitMessage(0);
            break;

        default:
            return DefWindowProc(hwnd, msg, wParam, lParam);
    }

    return 0;
}

bool RunConsoleProgramAndCaptureOutput(const char* command, char* outputBuffer, size_t outputBufferSize)
{
    HANDLE hReadPipe, hWritePipe;
    SECURITY_ATTRIBUTES sa;

    ZeroMemory(&sa, sizeof(SECURITY_ATTRIBUTES));
    sa.nLength = sizeof(SECURITY_ATTRIBUTES);
    sa.bInheritHandle = TRUE;
    sa.lpSecurityDescriptor = NULL;

    if (!CreatePipe(&hReadPipe, &hWritePipe, &sa, 0))
    {
        return false;
    }

    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(STARTUPINFO));
    si.cb = sizeof(STARTUPINFO);
    si.dwFlags = STARTF_USESTDHANDLES;
    si.hStdOutput = hWritePipe;
    si.hStdError = hWritePipe;

    ZeroMemory(&pi, sizeof(PROCESS_INFORMATION));

    if (!CreateProcess(NULL, (LPSTR)command, NULL, NULL, TRUE, CREATE_NO_WINDOW, NULL, NULL, &si, &pi))
    {
        CloseHandle(hReadPipe);
        CloseHandle(hWritePipe);
        return false;
    }

    DWORD bytesRead;
    bool result = ReadFile(hReadPipe, outputBuffer, outputBufferSize - 1, &bytesRead, NULL);

    if (result)
    {
        outputBuffer[bytesRead] = '\0';
    }

    CloseHandle(hReadPipe);
    CloseHandle(hWritePipe);
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return result;
}
