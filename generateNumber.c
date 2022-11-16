#include "headers/header1.h"

void generateNumber(){
    int count=0;
    for (int k = 0; k < setting.numberNum; ++k) {
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                if (field[i][j]==0){
                    count++;
                }
            }
        }
        if (count==0){
            return;
        }
        srand(time(NULL));
        int i=rand()%4,j=rand()%4;
        while (field[i][j]!=0){
            i=rand()%4;
            j=rand()%4;
        }
        field[i][j]=2;
        count=0;
    }
}