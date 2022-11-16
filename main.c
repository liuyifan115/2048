//TODO
// -设置菜单

#include "headers/header1.h"

llu field[4][4]={};
llu score=0;

int main() {
    int input=0;
    int status=0;
    generateNumber();
    system("cls");
    score=getScore();
    outPut();
    while (1){
        score=getScore();
        input=getInput();
        if (input!='+'){
            if (input=='h'){
                help();
                continue;
            }
            if (input=='n'){
                settings();
                continue;
            }
            status=processing(input);

            if (status==-1||status==1){
                system("cls");
                outPut();
                printf("\n游戏结束！\n");
                system("pause");
                break;
            }
        }
        else{
            continue;
        }
        system("cls");
        outPut();
    }
    return 0;
}
