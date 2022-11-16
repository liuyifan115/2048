#ifndef INC_2048_HEADER1_H
#define INC_2048_HEADER1_H

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "windows.h"
#include "conio.h"

#define llu unsigned long long

struct settings{
    int enableScore;
    int numberNum;
};

extern llu field[4][4];
extern llu score;
extern struct settings setting;


int processing(int);
void outPut();
void generateNumber();
int getInput();
void help();
void settings();
int judge(int);
llu getScore();

#endif //INC_2048_HEADER1_H
