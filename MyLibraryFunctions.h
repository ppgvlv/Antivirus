#pragma once

#ifndef MY_LIBRARY_FUNCTIONS_H
#define MY_LIBRARY_FUNCTIONS_H

// ISO-C
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
// Windows
#include <windows.h>
#include <conio.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>

#define MAX_LENGTH_OF_STRING    1000
#define MAX_LENGTH_OF_CRC       256

#define HEADER_SIZE             1024
#define JUMP_SIZE               1024
#define BUFFER_SIZE             0x4000
#define EOF_SIZE                2048
#define REDUNDANCY_SIZE         EOF_SIZE + 1024
#define ALL_SIZE                HEADER_SIZE + JUMP_SIZE + EOF_SIZE + BUFFER_SIZE

#define HEADER_START            0
#define JUMP_START              HEADER_SIZE
#define EOF_START               HEADER_SIZE + JUMP_SIZE
#define BUFFER_START            HEADER_SIZE + JUMP_SIZE + EOF_SIZE

#define OT_FILE                 0x00
#define OT_SECTOR               0x01
#define OT_MEMORY               0x03

#define ST_COM                  0x01
#define ST_EXE                  0x02
#define ST_SYS                  0x04
#define ST_NE                   0x08
#define ST_JAVA                 0x10

#define ST_MBR                  0x01
#define ST_BOOT                 0x02

#define ST_MCB                  0x01
#define ST_CUT                  0x02
#define ST_ADDRESS              0x03

#define R_CLEAN                 0
#define R_DETECT                1
#define R_PRE_DETECT            2
#define R_CURE                  3
#define R_PRE_CURE              4
#define R_DELETE                5
#define R_WARNING               6
#define R_FAIL                  7

struct __Logger
{
    unsigned int   m_sector;
    unsigned int   m_folder;
    unsigned int   m_infected;
    unsigned int   m_checked;
    unsigned int   m_warnings;
    unsigned int   m_deleted;
    unsigned int   m_error;
    unsigned int   m_disinfected;
};
typedef struct __Logger Logger;

struct __HeaderExe
{
    unsigned short int      m_partPag;
    unsigned short int      m_pageCnt;
    unsigned short int      m_reloCnt;
    unsigned short int      m_hdrSize;
    unsigned short int      m_minMem;
    unsigned short int      m_maxMem;
    unsigned short int      m_chkSum;
    unsigned short int      m_magic;
    unsigned short int      m_SS;
    unsigned short int      m_SP;
    unsigned short int      m_IP;
    unsigned short int      m_CS;
    unsigned short int      m_tabOff;
    unsigned short int      m_overlay;
};
typedef struct __HeaderExe HeaderExe;

struct __Manager
{
    unsigned char           m_header[HEADER_SIZE];
    unsigned char           m_jump[JUMP_SIZE];
    unsigned char           m_eof[EOF_SIZE];
    unsigned char           m_buffer[BUFFER_SIZE];
    unsigned char           m_redundancy[REDUNDANCY_SIZE];
    unsigned char           m_disk;
    unsigned char           m_objectType;
    unsigned char           m_subType;
    unsigned char           m_flagAllFiles;
    unsigned char           m_flagCure;
    unsigned char           m_flagOk;
    unsigned char           m_flagPages;
    unsigned char           m_flagSubdir;
    unsigned char           m_flagList;
    unsigned char           m_flagBoot;
    unsigned char           m_flagMem;
    unsigned char           m_flagDeletedInformation;
    unsigned char           m_flagReport;
    unsigned char           m_flagRedundancy;
    unsigned char           m_flagStopScan;
    unsigned char           m_flagNotStop;
    unsigned short int      m_entryCount;
    unsigned short int      m_exeIP;
    unsigned short int      m_redundancyLength;
    unsigned int            m_fileLength;
    unsigned int            m_EP;
    unsigned int            m_tail;
    unsigned int            m_rFlags;
    unsigned int            m_openedFile;
    char                    m_fileName[0x255];
    char                    m_reportName[0x255];
    FILE                   *m_reportHandle;
    Logger                  m_state;
};
typedef struct __Manager Manager;

typedef struct
{
    unsigned char           m_subType;
    unsigned int            m_checkDword;
    unsigned short int      m_offSet1;
    unsigned char           m_lengthCrc1;
    unsigned int            m_crc1;
    unsigned short int      m_offSet2;
    unsigned char           m_lengthCrc2;
    unsigned int            m_crc2;
    char                   *m_virusName;
    unsigned short int    (*m_decode)(void);
    unsigned short int    (*m_cure)(void);
} FILE_RECORD;

typedef struct
{
    unsigned int            m_checkDword;
    unsigned short int      m_offSet1;
    unsigned char           m_lengthCrc1;
    unsigned int            m_crc1;
    unsigned short int      m_offSet2;
    unsigned char           m_lengthCrc2;
    unsigned int            m_crc2;
    char                   *m_virusName;
    unsigned short int    (*m_decode)(void);
    unsigned short int    (*m_cure)(void);
} SECTOR_RECORD;

typedef struct
{
    unsigned char           m_sub_type;
    unsigned int            m_check_dword;
    unsigned short int      m_offset1;
    unsigned short int      m_segment1;
    unsigned char           m_len_crc1;
    unsigned int            m_crc1;
    char                   *m_virusName;
    unsigned short int      (*m_decode)(void);
    unsigned short int      (*m_cure)(void);
    unsigned short int      m_cure_off;
    unsigned char           m_cure_data[6];
} MEM_RECORD;

struct __AntivirusFile
{
    FILE_RECORD         *m_fileRecord;
    MEM_RECORD          *m_memRecord;
    SECTOR_RECORD       *m_sectorRecord;
    unsigned short int   m_numFileRecords;
    unsigned short int   m_numMemRecords;
    unsigned short int   m_numSectorRecords;
    unsigned short int   m_totalRecords;
};
typedef struct __AntivirusFile AntivirusFile;

#define CCHMAXPATH 512
char szFilename[CCHMAXPATH + 1];
char szFullFileName[CCHMAXPATH + 1];

// Declare global variables
extern Manager          G_M;
extern unsigned int     G_CRCArr[MAX_LENGTH_OF_CRC];
extern AntivirusFile    G_AF;

void LowerCaseString(char *des, const char *src, int cnt);
int InCaseStrCmp(const char *strA, const char *strB);
void Printf(char *format, ...);
void RepeatPrintf(char *format, ...);
void ReportPrintf(char *format, ...);
void CommandLineParser(const int count, char **arguments);
void AddDataTime(char *format);
void InitCRC(void);
void ShowVirusList(void);
unsigned char Rotate(void);
void CopyData(void *dest, const void *src, size_t cnt);
void FillData(void *dest, unsigned char ch, size_t cnt);
int Read(void *buffer, unsigned int count);
int Write(void *buffer, unsigned int count);
long Seek(long offSet);
int SeekRead(long offSet, void *buffer, unsigned int count);
int SeekWrite(long offSet,void *buffer, unsigned int count);
int FillEOF(unsigned int fileLength, unsigned char *buffer, unsigned int size);
int IsProgram(const char *fileName, unsigned char *buffer);
int GetFirstFileEntry(void);
int Read13(unsigned short int R_CX, unsigned char R_DH, void *buffer);
int Write13(unsigned short int R_CX, unsigned char R_DH, void *buffer);
int ReadBootMBR(void *buffer);
int WriteBootMBR(void *buffer);
int GetFirstBootEntry(void);
int GetNextFileEntry(void);
int GetNextBootEntry(void);
unsigned short int fillBuffers(void);
unsigned int CalculateCRC(unsigned char FAR*address, unsigned int Size);
unsigned short int FillFile(long offSet, unsigned char ch, unsigned short int len);
int ChangeSize(long newSize);
unsigned short int DeleteFileAndDir(void);
unsigned short int ScanFile(void);
int OverwriteSector(void);
unsigned short int ScanSector(void);
void WritePage(const char *fileName, void *buffer, int count);
unsigned short int CheckFile(const char *fileName);
void ScanPath(const char *currentDirectory);
void AntivirusProcessing(const int count, char **arguments);

#endif  // MY_LIBRARY_FUNCTIONS_H