#include "MyLibraryFunctions.h"

// Definition of global variable
Manager         G_M;
unsigned int    G_CRCArr[MAX_LENGTH_OF_CRC];
AntivirusFile   G_AF;

enum
{
    NO_VIRUSES_DETECTED,
    SCANNING_IS_NOT_COMPLETED,
    SUSPICIOUS_OBJECTS_FOUND = 3,
    VIRUS_DETECTED,
    ALL_DETECTED_VIRUSES_REMOVED
};

int main(int argc, char **argv)
{
    char *prompt = "\n\tSimple Antivirus for Windows\n\t\tVersion 1.0\n\n";
    printf(prompt);

    memset(&G_M, 0, sizeof(Manager));
    CommandLineParser(argc, argv);

    ReportPrintf(prompt);
    AddDataTime("Report was created at date: %04d/%02d/%02d, time: %02d:%02d:%02d\n");
    ReportPrintf("Command line :");

    for (int idx = 1; idx < argc; ++idx)
    {
        ReportPrintf(" %s", argv[idx]);
    }
    ReportPrintf("\n\n");

    RepeatPrintf("Loading Database, Antivirus records: ");

    InitCRC();

    RepeatPrintf("%d\n", G_AF.m_totalRecords);

    if (G_M.m_flagList)
    {
        RepeatPrintf("Virus list ...\n");
        ShowVirusList();
    }

    if (argc >= 2)
    {
        if (R_CLEAN == CheckFile(argv[0]))
        {
            --G_M.m_state.m_checked;
        }
        AntivirusProcessing(argc, argv);
    }
    else
    {
        printf(
               "Usage:\n"
               "    -*                  Scan all files\n"
               "    --                  Disinfect\n"
               "    -e/E                Delete infected files\n"
               "    -l/L                Make virus list\n"
               "    -o/O                Display OK messages\n"
               "    -r/R                Do not scan subdirectories\n"
               "    -b/B                Do not scan sectors (32-bit by default)\n"
               "    -m/M                Do not scan memory (32-bit by default)\n"
               "    -v/V                Enable redundant scanning\n"
               "    -w/W[=filename]     save report\n"
               "    -z/Z                Disable aborting\n"
               "    -p/P                Save pages\n");
    }

    if (G_M.m_state.m_infected)
    {
        if (G_M.m_state.m_infected == G_M.m_state.m_disinfected)
        {
            return ALL_DETECTED_VIRUSES_REMOVED;
        }
        else
        {
            return VIRUS_DETECTED;
        }
    }

    if (G_M.m_state.m_warnings)
    {
        return SUSPICIOUS_OBJECTS_FOUND;
    }

    return NO_VIRUSES_DETECTED;
}