//TODO
// -���ò˵�

#include "headers/header1.h"

llu field[4][4]={};

int main() {
    int input=0;
    int status=0;
    generateNumber();
    system("cls");
    outPut();
    while (1){
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
                printf("\n��Ϸ������\n");
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
