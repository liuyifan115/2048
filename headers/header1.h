#ifndef INC_2048_HEADER1_H
#define INC_2048_HEADER1_H

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "windows.h"
#include "conio.h"

#define llu unsigned long long

extern llu field[4][4];

int processing(int);
void outPut();
void generateNumber();
int getInput();
void help();
void settings();
int judge(int);

#endif //INC_2048_HEADER1_H
