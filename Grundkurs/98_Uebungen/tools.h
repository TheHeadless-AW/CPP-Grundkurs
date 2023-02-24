#pragma once

#ifndef _TOOLS_H_
#define _TOOLS_H_

#define PI 3.1415926536
#define begin {
#define end }
//#define BOOL int
//#define DWORD int
#define QUAD(a) ((a) * (a))  // ((2 + 1) * (2 + 1))
#define ADD(a, b) ((a) + (b))
#define ABS(a) ((a) < 0 ? -(a) : (a))
#define MAX(a, b) ((a) > (b)? (a) : (b))
#define MIN(a, b) ((a) < (b)? (a) : (b))
#ifndef WIN32
#define CLS { cout << "\033[2J";}
#endif

#ifdef _WIN32
#include <Windows.h>
#define OUT_HAND GetStdHandle(STD_OUTPUT_HANDLE)
#define CLS {DWORD lp; COORD coord={0,0}; FillConsoleOutputCharacter(OUT_HAND,' ',80*25,coord, &lp);}
#define LOCATE(x, y) {COORD coord={(x), (y)}; SetConsoleCursorPosition(OUT_HAND, coord);}
#endif

#endif // _TOOLS_H_