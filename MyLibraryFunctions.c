#include "MyLibraryFunctions.h"

unsigned char MBR_DATA[512]=
{
0xFA,0x33,0xC0,0x8E, 0xD0,0xBC,0x00,0x7C, 0x8B,0xF4,0x50,0x07, 0x50,0x1F,0xFB,0xFC,
0xBF,0x00,0x06,0xB9, 0x00,0x01,0xF2,0xA5, 0xEA,0x1D,0x06,0x00, 0x00,0xBE,0xBE,0x07,
0xB3,0x04,0x80,0x3C, 0x80,0x74,0x0E,0x80, 0x3C,0x00,0x75,0x1C, 0x83,0xC6,0x10,0xFE,
0xCB,0x75,0xEF,0xCD, 0x18,0x8B,0x14,0x8B, 0x4C,0x02,0x8B,0xEE, 0x83,0xC6,0x10,0xFE,
0xCB,0x74,0x1A,0x80, 0x3C,0x00,0x74,0xF4, 0xBE,0x8B,0x06,0xAC, 0x3C,0x00,0x74,0x0B,
0x56,0xBB,0x07,0x00, 0xB4,0x0E,0xCD,0x10, 0x5E,0xEB,0xF0,0xEB, 0xFE,0xBF,0x05,0x00,
0xBB,0x00,0x7C,0xB8, 0x01,0x02,0x57,0xCD, 0x13,0x5F,0x73,0x0C, 0x33,0xC0,0xCD,0x13,
0x4F,0x75,0xED,0xBE, 0xA3,0x06,0xEB,0xD3, 0xBE,0xC2,0x06,0xBF, 0xFE,0x7D,0x81,0x3D,
0x55,0xAA,0x75,0xC7, 0x8B,0xF5,0xEA,0x00, 0x7C,0x00,0x00,0x49, 0x6E,0x76,0x61,0x6C,
0x69,0x64,0x20,0x70, 0x61,0x72,0x74,0x69, 0x74,0x69,0x6F,0x6E, 0x20,0x74,0x61,0x62,
0x6C,0x65,0x00,0x45, 0x72,0x72,0x6F,0x72, 0x20,0x6C,0x6F,0x61, 0x64,0x69,0x6E,0x67,
0x20,0x6F,0x70,0x65, 0x72,0x61,0x74,0x69, 0x6E,0x67,0x20,0x73, 0x79,0x73,0x74,0x65,
0x6D,0x00,0x4D,0x69, 0x73,0x73,0x69,0x6E, 0x67,0x20,0x6F,0x70, 0x65,0x72,0x61,0x74,
0x69,0x6E,0x67,0x20, 0x73,0x79,0x73,0x74, 0x65,0x6D,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x80,0x01,
0x01,0x00,0x06,0x0E, 0x16,0xFC,0x16,0x00, 0x00,0x00,0x0C,0x46, 0x01,0x00,0x00,0x00,
0x01,0xFD,0x05,0x0E, 0xD6,0xF1,0x22,0x46, 0x01,0x00,0xD2,0xCF, 0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x55,0xAA
};

unsigned char BOOT_DATA[512]=
{
0xEB,0x28,0x90,0x49, 0x42,0x4D,0x20,0x50, 0x4E,0x43,0x49,0x00, 0x02,0x01,0x01,0x00,
0x02,0xE0,0x00,0x40, 0x0B,0xF0,0x09,0x00, 0x12,0x00,0x02,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0xFA,0x33, 0xC0,0x8E,0xD0,0xBC,
0xF0,0x7B,0xFB,0xB8, 0xC0,0x07,0x8E,0xD8, 0xBE,0x5C,0x00,0x90, 0x90,0xFC,0xAC,0x0A,
0xC0,0x74,0x0B,0x56, 0xB4,0x0E,0xBB,0x07, 0x00,0xCD,0x10,0x5E, 0xEB,0xF0,0x32,0xE4,
0xCD,0x16,0xB4,0x0F, 0xCD,0x10,0x32,0xE4, 0xCD,0x10,0xCD,0x19, 0x0D,0x0A,0x0D,0x0A,
0x0D,0x0A,0x0D,0x0A, 0x0D,0x0A,0x0D,0x0A, 0x0D,0x0A,0x0D,0x0A, 0x20,0x20,0x20,0x20,
0x54,0x68,0x69,0x73, 0x20,0x64,0x69,0x73, 0x6B,0x20,0x69,0x73, 0x20,0x6E,0x6F,0x74,
0x20,0x62,0x6F,0x6F, 0x74,0x61,0x62,0x6C, 0x65,0x0D,0x0A,0x0D, 0x0A,0x20,0x49,0x66,
0x20,0x79,0x6F,0x75, 0x20,0x77,0x69,0x73, 0x68,0x20,0x74,0x6F, 0x20,0x6D,0x61,0x6B,
0x65,0x20,0x69,0x74, 0x20,0x62,0x6F,0x6F, 0x74,0x61,0x62,0x6C, 0x65,0x2C,0x0D,0x0A,
0x72,0x75,0x6E,0x20, 0x74,0x68,0x65,0x20, 0x44,0x4F,0x53,0x20, 0x70,0x72,0x6F,0x67,
0x72,0x61,0x6D,0x20, 0x53,0x59,0x53,0x20, 0x61,0x66,0x74,0x65, 0x72,0x20,0x74,0x68,
0x65,0x0D,0x0A,0x20, 0x20,0x20,0x20,0x20, 0x73,0x79,0x73,0x74, 0x65,0x6D,0x20,0x68,
0x61,0x73,0x20,0x62, 0x65,0x65,0x6E,0x20, 0x6C,0x6F,0x61,0x64, 0x65,0x64,0x0D,0x0A,
0x0D,0x0A,0x50,0x6C, 0x65,0x61,0x73,0x65, 0x20,0x69,0x6E,0x73, 0x65,0x72,0x74,0x20,
0x61,0x20,0x44,0x4F, 0x53,0x20,0x64,0x69, 0x73,0x6B,0x65,0x74, 0x74,0x65,0x20,0x69,
0x6E,0x74,0x6F,0x0D, 0x0A,0x20,0x74,0x68, 0x65,0x20,0x64,0x72, 0x69,0x76,0x65,0x20,
0x61,0x6E,0x64,0x20, 0x73,0x74,0x72,0x69, 0x6B,0x65,0x20,0x61, 0x6E,0x79,0x20,0x6B,
0x65,0x79,0x2E,0x2E, 0x2E,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x55,0xAA
};

void LowerCaseString(char *des, const char *src, int cnt)
{
    int idx = 0;
    for(; src[idx] && idx < cnt-1; ++idx)
    {
        des[idx] = src[idx];

        if(isupper(des[idx]))
        {
            des[idx] += 32;
        }
    }
    des[idx] = '\0';
}

int InCaseStrCmp(const char *strA, const char *strB)
{
    char tmpA[MAX_LENGTH_OF_STRING] = {0};  // Local variables will automatically
    char tmpB[MAX_LENGTH_OF_STRING] = {0};  // release memory space of stack

    LowerCaseString(tmpA, strA, MAX_LENGTH_OF_STRING);    
    LowerCaseString(tmpB, strB, MAX_LENGTH_OF_STRING);    

    for(int idx = 0; tmpA[idx] || tmpB[idx]; ++idx)
    {
        if(tmpA[idx] == tmpB[idx])
        {
            continue;
        }
        else
        {
            return tmpA[idx] - tmpB[idx];
        }
    }

    return 0;
}

void Printf(char *format, ...)
{
    va_list argPtr;

    va_start(argPtr, format);

    if (G_M.m_flagReport)
    {
        vfprintf(G_M.m_reportHandle, format, argPtr);
        fprintf(G_M.m_reportHandle,"\n");
    }
    vprintf(format, argPtr);
    printf("\n");

    va_end(argPtr);
}

void RepeatPrintf(char *format, ...)
{
    va_list argPtr;

    va_start(argPtr, format);

    if (G_M.m_flagReport)
    {
        vfprintf(G_M.m_reportHandle, format, argPtr);
    }

    vprintf(format, argPtr);

    va_end(argPtr);
}

void ReportPrintf(char *format, ...)
{
    va_list argPtr;

    va_start(argPtr, format);

    if (G_M.m_flagReport)
    {
        vfprintf(G_M.m_reportHandle, format, argPtr);
    }

    va_end(argPtr);
}

// Command line parser
void CommandLineParser(const int count, char **arguments)
{
    // The input arguments are from the second
    for (int idx = 1; idx < count; ++idx)
    {
        char *pCommand = NULL;
        // The start flag of the real arguments
        if (arguments[idx][0] == '/' || arguments[idx][0] == '-' )
        {
            // Get specific command and strip the '/' or '-'
            pCommand = arguments[idx] + 1;

            // Start parsing command
            if (!InCaseStrCmp(pCommand, "*"))
            {
                G_M.m_flagAllFiles = 1;
                printf("m_flagAllFiles\n");
                continue;
            }

            if (!InCaseStrCmp(pCommand, "-"))
            {
                G_M.m_flagCure = 1;
                printf("m_flagCure\n");
                continue;
            }

            if (!InCaseStrCmp(pCommand, "o"))
            {
                G_M.m_flagOk = 1;
                printf("m_flagOk\n");
                continue;
            }

            if (!InCaseStrCmp(pCommand, "p"))
            {
                G_M.m_flagPages = 1;
                printf("m_flagPages\n");
                continue;
            }

            if (!InCaseStrCmp(pCommand, "r"))
            {
                G_M.m_flagSubdir = 1;
                printf("m_flagSubdir\n");
                continue;
            }

            if (!InCaseStrCmp(pCommand, "l"))
            {
                G_M.m_flagList = 1;
                printf("m_flagList\n");
                continue;
            }

            if (!InCaseStrCmp(pCommand, "b"))
            {
                G_M.m_flagBoot = 1;
                printf("m_flagBoot\n");
                continue;
            }

            if (!InCaseStrCmp(pCommand, "m"))
            {
                G_M.m_flagMem = 1;
                printf("m_flagMem\n");
                continue;
            }

            if (!InCaseStrCmp(pCommand, "e"))
            {
                G_M.m_flagDeletedInformation = 1;
                printf("m_flagDeletedInformation\n");
                continue;
            }

            if (!InCaseStrCmp(pCommand, "z"))
            {
                G_M.m_flagNotStop = 1;
                printf("m_flagNotStop\n");
                continue;
            }

            if (!InCaseStrCmp(pCommand, "v"))
            {
                G_M.m_flagRedundancy = 1;
                printf("m_flagRedundancy\n");
                continue;
            }

            if (!InCaseStrCmp(pCommand, "w"))
            {
                G_M.m_flagReport = 1;
                printf("m_flagReport = 1\n");

                if (pCommand[1])
                {
                    strcpy(G_M.m_reportName, pCommand + 2);
                }

                if (strlen(G_M.m_reportName) == 0)
                {
                    strcpy(G_M.m_reportName, "antivirus.log");
                }

                if ( (G_M.m_reportHandle = fopen(G_M.m_reportName, "w+t")) == NULL)
                {
                    G_M.m_flagReport = 0;
                    printf("m_flagReport = 0\n");
                }

                continue;
            }

            RepeatPrintf("Unknown keyword : %s\n",arguments[idx]);
        }
    }   // End of parsing command
}

void AddDataTime(char *format)
{
    char tmpStr[MAX_LENGTH_OF_STRING];

    SYSTEMTIME localTime;
    GetLocalTime(&localTime);
    sprintf(tmpStr,
            format,
            localTime.wYear,
            localTime.wMonth,
            localTime.wDay,
            localTime.wHour,
            localTime.wMinute,
            localTime.wSecond);

    ReportPrintf(tmpStr);
}

void InitCRC(void)
{
    unsigned int C;

    for (int idx = 0; idx < MAX_LENGTH_OF_CRC; ++idx)
    {
        for (int cnt=0; cnt < 8; ++cnt)
        {
            C = idx;
            C = (C & 1) ? (C >> 1)^0xEDB88320L : (C>>1);
        }

        G_CRCArr[idx] = C;
    }
}

void ShowVirusList(void)
{
    FILE_RECORD *currentRecord;

    currentRecord = G_AF.m_fileRecord;
    for (int idx = 0; idx < G_AF.m_numFileRecords; ++idx)
    {
        RepeatPrintf("%s\n", currentRecord->m_virusName);
        ++currentRecord;
    }
}

// The purpose of this function is to display a rotating animation on the console
unsigned char Rotate(void)
{
    static unsigned char animation[] = "-\\|/";
    static int idx = 0;
    unsigned char ch = 0;

    printf("%c\b", animation[idx]);
    idx++;
    idx &= 3;

    // `kbhit()` is a function that is used to determine whether a key has been pressed on the keyboard
    if ((0 == G_M.m_flagNotStop) && kbhit())
    {
        ch = getch();
        if (!ch)
        {
            getch();
        }

        if (ch == 0x1B || ch == 0x20 || ch == 0x0D)
        {
            printf("Cancel scan process ? (Yes/No) \n");
            ch = getch();
            if (!ch)
            {
                getch();
            }
            if ( (ch|0x20) == 'y' || ch == 0x0D)
            {
                ch = 0x1B;
            }
            else
            {
                ch = 0;
            }
        }
    }

    return ch;
}

void CopyData(void *dest, const void *src, size_t cnt)
{
    memcpy(dest, src, cnt);
}

void FillData(void *dest, unsigned char ch, size_t cnt)
{
     memset(dest, ch, cnt);
}

int Read(void *buffer, unsigned int count)
{
    return _read(G_M.m_openedFile, buffer, count);
}

int Write(void *buffer, unsigned int count)
{
    return _write(G_M.m_openedFile, buffer, count);
}

long Seek(long offSet)
{
    return lseek(G_M.m_openedFile, offSet, SEEK_SET);
}

int SeekRead(long offSet, void *buffer, unsigned int count)
{
    lseek(G_M.m_openedFile, offSet, SEEK_SET);
    return _read(G_M.m_openedFile, buffer, count);
}

int SeekWrite(long offSet,void *buffer, unsigned int count)
{
    lseek(G_M.m_openedFile, offSet, SEEK_SET);
    return _write(G_M.m_openedFile, buffer, count);
}

int FillEOF(unsigned int fileLength, unsigned char *buffer, unsigned int size)
{
    if (fileLength == 0)
    {
        return 0;
    }

    if (fileLength < size)
    {
        SeekRead(0, buffer+size-fileLength, fileLength);
    }
    else
    {
        SeekRead(fileLength-size, buffer, size);
    }

    return 1;
}

int IsProgram(const char *fileName, unsigned char *buffer)
{
    char *pStr = NULL;

    if (G_M.m_flagAllFiles == 0)
    {
        pStr = strrchr(fileName,'.');
        if (pStr != NULL)
        {
            switch ( ((unsigned short int*)(pStr+1))[0] | 0x2020)
            {
                case 0x6F63:
                case 0x7865:
                case 0x6162:
                case 0x7573:
                goto Return_flag;
            }
        }

        if (buffer[0] == 0xE9 || buffer[0] == 0xE8)
        {
            goto Return_flag;
        }

        // The 'MZ' character constant represents a special signature that identifies the file as an executable
        // 'MZ' == 19802, 'ZM' == 23117
        // if (((unsigned short int*)(buffer))[0] == 'MZ' || ((unsigned short int*)(buffer))[0] == 'ZM')
        if ( 19802 == ((unsigned short int*)(buffer))[0] || 23117 == ((unsigned short int*)(buffer))[0])
        {
            goto Return_flag;
        }

        return 0;
    }

Return_flag:

    return 1;
}

int GetFirstFileEntry(void)
{
    HeaderExe *pHeader = (HeaderExe *)G_M.m_header;

    // The 'MZ' character constant represents a special signature that identifies the file as an executable
    // 'MZ' == 19802, 'ZM' == 23117
    // if (('MZ' == pHeader->m_magic || 'ZM' == pHeader->m_magic)
    if ((19802 == pHeader->m_magic || 23117 == pHeader->m_magic)
       && pHeader->m_partPag < 0x200 )
    {
        G_M.m_subType = ST_EXE;
        G_M.m_EP = ((unsigned int)(pHeader->m_hdrSize + pHeader->m_CS) * 0x10 + pHeader->m_IP) & 0xFFFFFl;
        G_M.m_exeIP = pHeader->m_IP;
    }
    else
    {
        if (0xE9 == G_M.m_header[0] || 0xE8 == G_M.m_header[0])
        {
            G_M.m_EP = ((unsigned short int*)(G_M.m_header + 1))[0] + 3;
        }

        G_M.m_subType = ST_COM;
        G_M.m_exeIP = 0x100;
    }

    G_M.m_tail = G_M.m_fileLength - G_M.m_EP;

    SeekRead(G_M.m_EP, G_M.m_buffer + 0x2000, 0x2000);
    CopyData(G_M.m_jump, G_M.m_buffer + 0x2000, JUMP_SIZE);
    if (G_M.m_EP < 0x2000)
    {
        SeekRead(0,G_M.m_buffer+0x2000-G_M.m_EP,0x2000);
    }
    else
    {
        SeekRead(G_M.m_EP-0x2000,G_M.m_buffer,0x2000);
    }

    G_M.m_redundancyLength = 0;
    FillEOF(G_M.m_fileLength, G_M.m_eof, EOF_SIZE);

    if (G_M.m_flagRedundancy)
    {
        FillEOF(G_M.m_fileLength, G_M.m_redundancy, REDUNDANCY_SIZE);
    }

    Seek(0L);

    return 1;
}

int Read13(unsigned short int R_CX, unsigned char R_DH, void *buffer)
{
    return 0;
}

int Write13(unsigned short int R_CX, unsigned char R_DH, void *buffer)
{
    return 0;
}

int ReadBootMBR(void *buffer)
{
    return Read13(1, 0, buffer);
}

int WriteBootMBR(void *buffer)
{
    return Write13(1, 0, buffer);
}

int GetFirstBootEntry(void)
{
    switch (G_M.m_subType)
    {
        case ST_MBR:
        case ST_BOOT:
            if (ReadBootMBR(G_M.m_header) == 0)
            {
                G_M.m_rFlags = 1;

                return 0;
            }
            break;
    }

    if (0xE9 == G_M.m_header[0] || 0xE8 == G_M.m_header[0])
    {
        G_M.m_EP = ((unsigned short int*)(G_M.m_header + 1))[0] + 3;
    }

    if (0xEB == G_M.m_header[0])
    {
        G_M.m_EP = G_M.m_header[1] + 2;
    }

    CopyData(G_M.m_jump, G_M.m_header, G_M.m_EP);
    CopyData(G_M.m_buffer, G_M.m_header, G_M.m_EP);

    return 1;
}

int GetNextFileEntry(void)
{
    if (G_M.m_flagRedundancy && (++G_M.m_redundancyLength < 0x200) )
    {
        CopyData(G_M.m_eof, G_M.m_redundancy + 0x200 - G_M.m_redundancyLength, EOF_SIZE);
        --G_M.m_fileLength;

        return 1;
    }

    return 0;
}

int GetNextBootEntry(void)
{
    return 0;
}

unsigned short int fillBuffers(void)
{
    unsigned short int result = 0;

    G_M.m_rFlags = 0;
    if (0 == G_M.m_entryCount)
    {
        switch(G_M.m_objectType)
        {
            case OT_FILE:
                result = GetFirstFileEntry();
                break;
            case OT_SECTOR:
                result = GetFirstBootEntry();
                break;
        }
    }
    else
    {
        switch(G_M.m_objectType)
        {
            case OT_FILE:
                result = GetNextFileEntry();
                break;
            case OT_SECTOR:
                result = GetNextBootEntry();
                break;
        }
    }

    if (1 == G_M.m_rFlags)
    {
        ++G_M.m_state.m_error;
        RepeatPrintf("%s\tI/O error\n", G_M.m_fileName);
    }

    return result;
}

// The `FAR` keyword is used to define the input parameter address as a pointer
// to a memory address that may be located outside the current code segment.
unsigned int CalculateCRC(unsigned char FAR*address, unsigned int Size)
{
    unsigned int startCRC = 0xFFFFFFFFl;

    for (int idx = 0; idx < Size; ++idx)
    {
        startCRC = G_CRCArr[(unsigned char)startCRC ^ address[idx]] ^ (startCRC >> 8);
    }

    return(startCRC);
}

unsigned short int FillFile(long offSet, unsigned char ch, unsigned short int len)
{
    if (len <= BUFFER_SIZE)
    {
        memset(G_M.m_buffer, ch, len);
        if (SeekWrite(offSet, G_M.m_buffer, len) == len)
        {
            return R_CURE;
        }
    }

    return R_FAIL;
}

int ChangeSize(long newSize)
{
    FillFile(newSize, 0, (unsigned short int)(G_M.m_fileLength - newSize));

    if (0 == newSize)
    {
        return R_DELETE;
    }

    chsize(G_M.m_openedFile, newSize);
    G_M.m_fileLength = newSize;

    Seek(0L);

    return R_CURE;
}

unsigned short int DeleteFileAndDir(void)
{
    unsigned short int Result = R_FAIL;

    _close(G_M.m_openedFile);

    SetFileAttributes(G_M.m_fileName, 0);

    if (remove(G_M.m_fileName) == 0)
    {
        Result = R_DELETE;
        ++G_M.m_state.m_deleted;
    }

    return Result;
}

unsigned short int ScanFile(void)
{
    unsigned short int result = R_CLEAN;
    FILE_RECORD *currentRecord = G_AF.m_fileRecord;

    for (int idx = 0; idx < G_AF.m_numFileRecords; ++idx)
    {
        if ( (currentRecord->m_subType & G_M.m_subType) != 0)
        {
            if (0 == currentRecord->m_lengthCrc1
                || currentRecord->m_checkDword == ((unsigned int*)(G_M.m_header + (currentRecord->m_offSet1) ))[0])
            {
                if (currentRecord->m_lengthCrc1 != 0 && currentRecord->m_crc1 == 0l)
                {
                    RepeatPrintf("\r%s\n",G_M.m_fileName);
                    RepeatPrintf("Check unsigned int is: %08lX\n",
                                ((unsigned int*)(G_M.m_header+(currentRecord->m_offSet1) ))[0] );
                    RepeatPrintf("Crc1 is:(%02X->%04X) %08lX\n",
                                 currentRecord->m_lengthCrc1,
                                 currentRecord->m_offSet1,
                                 CalculateCRC(G_M.m_header+currentRecord->m_offSet1,currentRecord->m_lengthCrc1) );
                }

                if (currentRecord->m_lengthCrc1 == 0
                    || CalculateCRC(G_M.m_header+currentRecord->m_offSet1, currentRecord->m_lengthCrc1) == currentRecord->m_crc1)
                {
                    result = (currentRecord->m_lengthCrc1 > 7) ? R_WARNING : R_PRE_DETECT;
                    if (currentRecord->m_decode != NULL)
                    {
                        result = currentRecord->m_decode();
                    }

                    if (result == R_WARNING || result == R_PRE_DETECT)
                    {
                        if (CalculateCRC(G_M.m_header+currentRecord->m_offSet2,currentRecord->m_lengthCrc2) ==
                            currentRecord->m_crc2)
                        {
                            result = R_DETECT;
                        }
                    }
                }

                if (currentRecord->m_lengthCrc2 != 0 && currentRecord->m_crc2 == 0l)
                {
                    RepeatPrintf("\r%s\n",G_M.m_fileName);
                    RepeatPrintf("Crc2 is:(%02X->%04X) %08lX\n",
                                  currentRecord->m_lengthCrc2,
                                  currentRecord->m_offSet2,
                                  CalculateCRC(G_M.m_header + currentRecord->m_offSet2, currentRecord->m_lengthCrc2) );
                }

                if (result == R_WARNING)
                {
                    ++G_M.m_state.m_warnings;
                    RepeatPrintf("%s",G_M.m_fileName);
                    RepeatPrintf("\twarning: %s\n", currentRecord->m_virusName);
                }

                if (result == R_DETECT)
                {
                    ++G_M.m_state.m_infected;
                    RepeatPrintf("%s",G_M.m_fileName);
                    RepeatPrintf("\tinfected: %s\n", currentRecord->m_virusName);

                    if (G_M.m_flagDeletedInformation)
                    {
                        result = DeleteFileAndDir();
                        RepeatPrintf("%s", G_M.m_fileName);
                        if (result == R_DELETE)
                        {
                            RepeatPrintf("\tdeleted: %s\n", currentRecord->m_virusName);
                        }
                        else
                        {
                            RepeatPrintf("\tdisinfection error: %s\n", currentRecord->m_virusName);
                        }
                        break;
                    }

                    if (G_M.m_flagCure)
                    {
                        result = R_FAIL;
                        _close(G_M.m_openedFile);

                        SetFileAttributes(G_M.m_fileName,0);
                        
                        if ( (G_M.m_openedFile = _open(G_M.m_fileName,O_RDWR|O_BINARY)) != -1 )
                        {
                            RepeatPrintf("%s",G_M.m_fileName);
                            if (currentRecord->m_cure != NULL)
                            {
                                result = currentRecord->m_cure();

                                if ( result == R_PRE_CURE)
                                {
                                    result = ChangeSize(G_M.m_EP);
                                }

                                switch (result)
                                {
                                    case R_CURE:
                                        ++G_M.m_state.m_disinfected;
                                        RepeatPrintf("\tdisinfected: %s\n", currentRecord->m_virusName);
                                        break;
                                    case R_DELETE:
                                        result = DeleteFileAndDir();
                                        if ( result == R_DELETE)
                                        {
                                            RepeatPrintf("\tdeleted: %s\n", currentRecord->m_virusName);
                                        }
                                        break;
                                    case R_FAIL:
                                        RepeatPrintf("\tdisinfection failed: %s\n", currentRecord->m_virusName);
                                        break;
                                    default:
                                        RepeatPrintf("\tdisinfection error: %s\n", currentRecord->m_virusName);
                                        break;
                                }
                            }
                            else
                            {
                                RepeatPrintf("\tdisinfection skipped: %s\n", currentRecord->m_virusName);
                            }
                        }
                        else
                        {
                            ++G_M.m_state.m_error;
                            RepeatPrintf("%s\tI/O error\n", G_M.m_fileName);
                        }
                    }
                    break;
                }
            }
        }

        ++currentRecord;
    } // End of for-loop statement

    return result;
}

int OverwriteSector(void)
{
    switch (G_M.m_subType)
    {
        case ST_MBR:
            CopyData(G_M.m_header, MBR_DATA, 0x1BE);
            ((unsigned short int*)(G_M.m_header + 0x1FE))[0] = 0xAA55;
            return WriteBootMBR(G_M.m_header);

        case ST_BOOT:
            CopyData(G_M.m_jump, BOOT_DATA, 512);
            CopyData(G_M.m_jump + 0x0D,G_M.m_header+0x0D,0x28-0x0D);
            G_M.m_jump[0x10] &= 0x0F;
            G_M.m_jump[0x15] |= 0xF0;
            G_M.m_jump[0x1B]  = G_M.m_jump[0x1F] = G_M.m_jump[0x21] = 0;

            return WriteBootMBR(G_M.m_jump);
    }

    return 0;
}

unsigned short int ScanSector(void)
{
    unsigned short int result = R_CLEAN;
    SECTOR_RECORD *currentRecord = G_AF.m_sectorRecord;

    for (int idx = 0; idx < G_AF.m_numSectorRecords; ++idx)
    {
            if (currentRecord->m_lengthCrc1 == 0
                || currentRecord->m_checkDword == ((unsigned int*)(G_M.m_header+(currentRecord->m_offSet1) ))[0])
            {
                if (currentRecord->m_lengthCrc1 != 0 && currentRecord->m_crc1 == 0l)
                {
                    RepeatPrintf("\r%s\n",G_M.m_fileName);
                    RepeatPrintf("Check unsigned int is: %08lX\n",
                                ((unsigned int*)(G_M.m_header + (currentRecord->m_offSet1) ))[0] );
                    RepeatPrintf("Crc1 is:(%02X->%04X) %08lX\n",
                                  currentRecord->m_lengthCrc1,
                                  currentRecord->m_offSet1,
                                  CalculateCRC(G_M.m_header + currentRecord->m_offSet1, currentRecord->m_lengthCrc1) );
                }

                if (currentRecord->m_lengthCrc1 == 0
                    || CalculateCRC(G_M.m_header+currentRecord->m_offSet1, currentRecord->m_lengthCrc1) == currentRecord->m_crc1)
                {
                    result = (currentRecord->m_lengthCrc1 > 7) ? R_WARNING : R_PRE_DETECT;
                    if (currentRecord->m_decode != NULL)
                    {
                        result = currentRecord->m_decode();
                    }

                    if (result == R_WARNING || result == R_PRE_DETECT)
                    {
                        if (CalculateCRC(G_M.m_header+currentRecord->m_offSet2, currentRecord->m_lengthCrc2) ==
                            currentRecord->m_crc2)
                        {
                            result = R_DETECT;
                        }
                    }
                }

                if (currentRecord->m_lengthCrc2 != 0 && currentRecord->m_crc2 == 0l)
                {
                    RepeatPrintf("\r%s\n",G_M.m_fileName);
                    RepeatPrintf("Crc2 is:(%02X->%04X) %08lX\n",
                                  currentRecord->m_lengthCrc2,
                                  currentRecord->m_offSet2,
                                  CalculateCRC(G_M.m_header + currentRecord->m_offSet2, currentRecord->m_lengthCrc2) );
                }

                if (result == R_WARNING)
                {
                    ++G_M.m_state.m_warnings;
                    RepeatPrintf("%s", G_M.m_fileName);
                    RepeatPrintf("\twarning: %s\n", currentRecord->m_virusName);
                }
                
                if (result == R_DETECT)
                {
                    ++G_M.m_state.m_infected;
                    RepeatPrintf("%s", G_M.m_fileName);
                    RepeatPrintf("\tinfected: %s\n", currentRecord->m_virusName);

                    if (G_M.m_flagCure)
                    {
                        result = R_FAIL;
                        RepeatPrintf("%s",G_M.m_fileName);
                        if (G_M.m_objectType == OT_FILE)
                        {
                            result = DeleteFileAndDir();

                            if (result == R_DELETE)
                            {
                                RepeatPrintf("\tdeleted: %s\n", currentRecord->m_virusName);
                            }
                            else
                            {
                                RepeatPrintf("\tdisinfection error: %s\n", currentRecord->m_virusName);
                            }
                            break;
                        }

                        if (currentRecord->m_cure != NULL)
                        {
                            result = currentRecord->m_cure();
                            if ( result == R_PRE_CURE)
                            {
                                if (WriteBootMBR(G_M.m_header))
                                    result = R_CURE;
                                else
                                    result = R_FAIL;
                            }
                            switch (result)
                            {
                                case R_CURE:
                                    ++G_M.m_state.m_disinfected;
                                    RepeatPrintf("\tdisinfected: %s\n", currentRecord->m_virusName);
                                    break;
                                case R_DELETE:
                                    // G_M.m_Stat.Deleted++;
                                    if (OverwriteSector())
                                    {
                                        RepeatPrintf("\tdeleted: %s\n", currentRecord->m_virusName);
                                        break;
                                    }                                   
                                    // Skip break
                                case R_FAIL:
                                    RepeatPrintf("\tdisinfection failed: %s\n", currentRecord->m_virusName);
                                    break;
                                default:
                                    RepeatPrintf("\tdisinfection error: %s\n", currentRecord->m_virusName);
                                    break;
                            }
                        }
                        else
                        {
                            RepeatPrintf("\tdisinfection skipped: %s\n", currentRecord->m_virusName);
                        }
                    }
                    break;
                }
            }

        ++currentRecord;
    }   // End of for-loop statement
    return result;
}

void WritePage(const char *fileName, void *buffer, int count)
{
    static char filename[64];
    char *pStr = NULL;

    if (G_M.m_flagPages && G_M.m_entryCount < 10)
    {
        strcpy(filename, fileName);

        pStr = strrchr(filename, '.');
        if (NULL == pStr)
        {
            strcat(filename,".pag");
        }
        else
        {
            *(pStr-1) = G_M.m_entryCount + '0';

            if ( !InCaseStrCmp(pStr, ".pag") )
            {
                return;
            }
        }

        strcpy(pStr,".pag");
        int file = creat(filename, S_IWRITE);
        if ( file != -1 )
        {
            _write(file, buffer, count);
            _close(file);
        }
    }
}

unsigned short int CheckFile(const char *fileName)
{
    unsigned short int result;

    G_M.m_objectType = OT_FILE;

Jump_to_here_check_more:

    result = R_FAIL;
    if (Rotate() == 0x1B)
    {
        G_M.m_flagStopScan = 1;
        RepeatPrintf("Stop Scan.\n");

        return result;
    }

    if ( (G_M.m_openedFile = _open(fileName, O_RDONLY | O_BINARY)) != -1 )
    {
        G_M.m_EP = 0;
        G_M.m_entryCount = 0;
        G_M.m_fileLength = filelength(G_M.m_openedFile);
        strcpy(G_M.m_fileName, fileName);
        memset(G_M.m_header, 0x0F, ALL_SIZE);

        SeekRead(0, G_M.m_header, HEADER_SIZE);
        if (IsProgram(fileName, G_M.m_header) != 0)
        {
            result = R_CLEAN;
            ++G_M.m_state.m_checked;

            while (fillBuffers() && result == R_CLEAN)
            {
                result = ScanFile();
                if (result == R_CLEAN)
                {
                    result = ScanSector();
                }
                WritePage(fileName, G_M.m_header, ALL_SIZE);
                ++G_M.m_entryCount;
            }

            if (result == R_CLEAN && G_M.m_flagOk && G_M.m_rFlags == 0)
            {
                RepeatPrintf("%s\tok.\n",G_M.m_fileName);
            }
        }

        _close(G_M.m_openedFile);
        if (R_CURE == result)
        {
            goto Jump_to_here_check_more;
        }
    }
    else
    {
        ++G_M.m_state.m_error;
        RepeatPrintf("%s\tI/O error\n", fileName);
    }

    return result;
}

void ScanPath(const char *currentDirectory)
{
    unsigned char    tmpFlag;
    HANDLE           fileHandle;
    // `WIN32_FIND_DATA` is a structure that is used to store information about a file or directory
    WIN32_FIND_DATA  wfd;
    WIN32_FIND_DATA  wfdTmp;

    wfd.dwFileAttributes = FILE_ATTRIBUTE_ARCHIVE
                         | FILE_ATTRIBUTE_HIDDEN
                         | FILE_ATTRIBUTE_READONLY
                         | FILE_ATTRIBUTE_SYSTEM;
    // `FindFirstFile()` is a function in the Windows API that is used to search for files or directories
    fileHandle = FindFirstFile(currentDirectory, &wfd);     // Get a handle from Win32 API
    if (fileHandle != INVALID_HANDLE_VALUE)
    {
        if (!(wfd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
        {
            tmpFlag = G_M.m_flagAllFiles;
            G_M.m_flagAllFiles = 1;
            // File found
            CheckFile(currentDirectory);
            G_M.m_flagAllFiles = tmpFlag;
        }
    }
    // FindClose() is a function in the Windows API that is used to close a search handle.
    FindClose(fileHandle);  // Close handle from Win32 API

    if ( currentDirectory[strlen(currentDirectory)-1] == '\\')
    {
        sprintf(szFilename, "%s*.*", currentDirectory);
    }
    else
    {
        sprintf(szFilename, "%s\\*.*", currentDirectory);
    }

    wfd.dwFileAttributes = FILE_ATTRIBUTE_ARCHIVE
                         | FILE_ATTRIBUTE_HIDDEN
                         | FILE_ATTRIBUTE_READONLY
                         | FILE_ATTRIBUTE_SYSTEM
                         | FILE_ATTRIBUTE_DIRECTORY;
    fileHandle = FindFirstFile(szFilename,&wfd);

    if ((fileHandle != INVALID_HANDLE_VALUE) && (0 == G_M.m_flagStopScan))
    {
        ++G_M.m_state.m_folder;

        do
        {
            if ( strcmp(wfd.cFileName, ".") && strcmp(wfd.cFileName, "..") )
            {
                if (wfd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
                {
                    if (0 == G_M.m_flagSubdir)
                    {
                        char tempDir[CCHMAXPATH + 1];
                        if ( currentDirectory[strlen(currentDirectory)-1] == '\\')
                        {
                            sprintf(tempDir,"%s%s", currentDirectory, wfd.cFileName);
                        }
                        else
                        {
                            sprintf(tempDir,"%s\\%s", currentDirectory, wfd.cFileName);
                        }

                        memcpy(&wfdTmp, &wfd, sizeof(WIN32_FIND_DATA));
                        ScanPath(tempDir);
                        memcpy(&wfd, &wfdTmp, sizeof(WIN32_FIND_DATA));
                    }
                }
                else
                {
                    if ( currentDirectory[strlen(currentDirectory)-1] == '\\')
                    {
                        sprintf(szFullFileName, "%s%s", currentDirectory, wfd.cFileName);
                    }
                    else
                    {
                        sprintf(szFullFileName, "%s\\%s", currentDirectory, wfd.cFileName);
                    }

                    // File found
                    CheckFile(szFullFileName);
                }
            }

        } while(FindNextFile(fileHandle,&wfd) != 0 && (0 == G_M.m_flagStopScan));

    }

     FindClose(fileHandle);
}

void AntivirusProcessing(const int count, char **arguments)
{
    for (int idx = 1; idx < count; ++idx)
    {
        // Pass path for scan antivirus
        if (arguments[idx][0] != '/' && arguments[idx][0] != '-')
        {
            RepeatPrintf("Processing %s\n",arguments[idx]);
            // Core function
            ScanPath(arguments[idx]);
        }
    }

    {   // Just print information
    RepeatPrintf("\nScanned\n"
                 "Sectors:     %8lu\n", G_M.m_state.m_sector);
    RepeatPrintf("Files:       %8lu\n", G_M.m_state.m_checked);
    RepeatPrintf("Folders:     %8lu\n", G_M.m_state.m_folder);
    RepeatPrintf("\nFound\n"
                 "Infected:    %8lu\n", G_M.m_state.m_infected);
    RepeatPrintf("Warnings:    %8lu\n", G_M.m_state.m_warnings);
    RepeatPrintf("Disinfected: %8lu\n", G_M.m_state.m_disinfected);
    RepeatPrintf("Deleted:     %8lu\n", G_M.m_state.m_deleted);
    RepeatPrintf("I/O Errors:  %8lu\n", G_M.m_state.m_error);
    AddDataTime("\nScan process was stopped at date: %04d/%02d/%02d, time: %02d:%02d:%02d\n");
    }
}
