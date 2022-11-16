#include "headers/header1.h"

void process(int);
void generate();
void init();
int equal(int );

llu fieldCopy1[4][4] = {};
llu fieldCopy2[4][4] = {};

int judge(int count){
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            fieldCopy1[i][j]=field[i][j];
        }
    }
    if (count == 0){
        if (equal('w')==-1&& equal('s')==-1&& equal('a')==-1&& equal('d')==-1){
            return -1;
        }
        else{
            return 0;
        }
    }
    if (count == 1){
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                if (fieldCopy1[i][j]==0){
                    fieldCopy1[i][j]=2;
                }
            }
        }
        if (equal('w')==-1&& equal('s')==-1&& equal('a')==-1&& equal('d')==-1){
            return -1;
        }
        else{
            return 0;
        }
    }
}


void init(){
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            fieldCopy2[i][j]=fieldCopy1[i][j];
        }
    }
}

int equal(int input){
    init();
    process(input);
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (fieldCopy2[i][j]==field[i][j]){
                continue;
            }
            else{
                return 0;
            }
        }
    }
    return -1;
}

void process(int input){

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            fieldCopy2[i][j] = field[i][j];
        }
    }
    switch (input) {
        case 'w': {
            for (int o = 0; o < 4; ++o) {
                //第一步，将向着该方向上的空隙填上
                for (int i = 0; i < 4; ++i) {
                    for (int j = 0; j < 4; ++j) {
                        if (fieldCopy2[j][i] == 0) {
                            continue;
                        }
                        for (int k = j - 1; k >= 0; --k) {
                            if (fieldCopy2[k][i] == 0) {
                                fieldCopy2[k][i] = fieldCopy2[j][i];
                                fieldCopy2[j][i] = 0;
                                j--;
                            }
                        }
                    }
                }
                //第二步，合并相同的数字
                for (int i = 0; i < 4; ++i) {
                    for (int j = 3; j >= 1; --j) {
                        if (fieldCopy2[j][i] == 0) {
                            continue;
                        }
                        if (fieldCopy2[j][i] == fieldCopy2[j - 1][i]) {
                            fieldCopy2[j - 1][i] *= 2;
                            fieldCopy2[j][i] = 0;
                        }
                    }
                }
                //第三步，将合并后产生的空隙填上
                for (int i = 0; i < 4; ++i) {
                    for (int j = 0; j < 4; ++j) {
                        if (fieldCopy2[j][i] == 0) {
                            continue;
                        }
                        for (int k = j - 1; k >= 0; --k) {
                            if (fieldCopy2[k][i] == 0) {
                                fieldCopy2[k][i] = fieldCopy2[j][i];
                                fieldCopy2[j][i] = 0;
                                j--;
                            }
                        }
                    }
                }
            }
            break;
        }
        case 's': {
            for (int o = 0; o < 4; ++o) {
                //第一步，将向着该方向上的空隙填上
                for (int i = 3; i >= 0; --i) {
                    for (int j = 3; j >= 0; --j) {
                        if (fieldCopy2[j][i] == 0) {
                            continue;
                        }
                        for (int k = j + 1; k < 4; ++k) {
                            if (fieldCopy2[k][i] == 0) {
                                fieldCopy2[k][i] = fieldCopy2[j][i];
                                fieldCopy2[j][i] = 0;
                                j++;
                            }
                        }
                    }
                }
                //第二步，合并相同的数字
                for (int i = 3; i >= 0; --i) {
                    for (int j = 0; j < 4; ++j) {
                        if (fieldCopy2[j][i] == 0) {
                            continue;
                        }
                        if (fieldCopy2[j][i] == fieldCopy2[j + 1][i]) {
                            fieldCopy2[j + 1][i] *= 2;
                            fieldCopy2[j][i] = 0;
                        }
                    }
                }
                //第三步，将合并后产生的空隙填上
                for (int i = 3; i >= 0; --i) {
                    for (int j = 3; j >= 0; --j) {
                        if (fieldCopy2[j][i] == 0) {
                            continue;
                        }
                        for (int k = j + 1; k < 4; ++k) {
                            if (fieldCopy2[k][i] == 0) {
                                fieldCopy2[k][i] = fieldCopy2[j][i];
                                fieldCopy2[j][i] = 0;
                                j++;
                            }
                        }
                    }
                }
            }
            break;
        }
        case 'a': {
            for (int o = 0; o < 4; ++o) {
                //第一步，将向着该方向上的空隙填上
                for (int i = 0; i < 4; ++i) {
                    for (int j = 0; j < 4; ++j) {
                        if (fieldCopy2[i][j] == 0) {
                            continue;
                        }
                        for (int k = j - 1; k >= 0; --k) {
                            if (fieldCopy2[i][k] == 0) {
                                fieldCopy2[i][k] = fieldCopy2[i][j];
                                fieldCopy2[i][j] = 0;
                                j--;
                            }
                        }
                    }
                }
                //第二步，合并相同的数字
                for (int i = 0; i < 4; ++i) {
                    for (int j = 3; j >= 1; --j) {
                        if (fieldCopy2[i][j] == 0) {
                            continue;
                        }
                        if (fieldCopy2[i][j] == fieldCopy2[i][j - 1]) {
                            fieldCopy2[i][j - 1] *= 2;
                            fieldCopy2[i][j] = 0;
                        }
                    }
                }
                //第三步，将合并后产生的空隙填上
                for (int i = 0; i < 4; ++i) {
                    for (int j = 0; j < 4; ++j) {
                        if (fieldCopy2[i][j] == 0) {
                            continue;
                        }
                        for (int k = j - 1; k >= 0; --k) {
                            if (fieldCopy2[i][k] == 0) {
                                fieldCopy2[i][k] = fieldCopy2[i][j];
                                fieldCopy2[i][j] = 0;
                                j--;
                            }
                        }
                    }
                }
            }
            break;
        }
        case 'd': {
            for (int o = 0; o < 4; ++o) {
                //第一步，将向着该方向上的空隙填上
                for (int i = 3; i >= 0; --i) {
                    for (int j = 3; j >= 0; --j) {
                        if (fieldCopy2[i][j] == 0) {
                            continue;
                        }
                        for (int k = j + 1; k < 4; ++k) {
                            if (fieldCopy2[i][k] == 0) {
                                fieldCopy2[i][k] = fieldCopy2[i][j];
                                fieldCopy2[i][j] = 0;
                                j++;
                            }
                        }
                    }
                }
                //第二步，合并相同的数字
                for (int i = 3; i >= 0; --i) {
                    for (int j = 0; j < 4; ++j) {
                        if (fieldCopy2[i][j] == 0) {
                            continue;
                        }
                        if (fieldCopy2[i][j] == fieldCopy2[i][j + 1]) {
                            fieldCopy2[i][j + 1] *= 2;
                            fieldCopy2[i][j] = 0;
                        }
                    }
                }
                //第三步，将合并后产生的空隙填上
                for (int i = 3; i >= 0; --i) {
                    for (int j = 3; j >= 0; --j) {
                        if (fieldCopy2[i][j] == 0) {
                            continue;
                        }
                        for (int k = j + 1; k < 4; ++k) {
                            if (fieldCopy2[i][k] == 0) {
                                fieldCopy2[i][k] = fieldCopy2[i][j];
                                fieldCopy2[i][j] = 0;
                                j++;
                            }
                        }
                    }
                }
            }
            break;
        }
    }
}
