#include "headers/header1.h"

extern llu field[4][4];

int processing(int input) {
    llu fieldCopy[4][4] = {};
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            fieldCopy[i][j] = field[i][j];
        }
    }
    switch (input) {
        case 'w': {
            for (int o = 0; o < 4; ++o) {
                //第一步，将向着该方向上的空隙填上
                for (int i = 0; i < 4; ++i) {
                    for (int j = 0; j < 4; ++j) {
                        if (fieldCopy[j][i] == 0) {
                            continue;
                        }
                        for (int k = j - 1; k >= 0; --k) {
                            if (fieldCopy[k][i] == 0) {
                                fieldCopy[k][i] = fieldCopy[j][i];
                                fieldCopy[j][i] = 0;
                                j--;
                            }
                        }
                    }
                }
                //第二步，合并相同的数字
                for (int i = 0; i < 4; ++i) {
                    for (int j = 3; j >= 1; --j) {
                        if (fieldCopy[j][i] == 0) {
                            continue;
                        }
                        if (fieldCopy[j][i] == fieldCopy[j - 1][i]) {
                            fieldCopy[j - 1][i] *= 2;
                            fieldCopy[j][i] = 0;
                        }
                    }
                }
                //第三步，将合并后产生的空隙填上
                for (int i = 0; i < 4; ++i) {
                    for (int j = 0; j < 4; ++j) {
                        if (fieldCopy[j][i] == 0) {
                            continue;
                        }
                        for (int k = j - 1; k >= 0; --k) {
                            if (fieldCopy[k][i] == 0) {
                                fieldCopy[k][i] = fieldCopy[j][i];
                                fieldCopy[j][i] = 0;
                                j--;
                            }
                        }
                    }
                }
            }
            //第四步，将运算结果写入field
            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
                    field[i][j] = fieldCopy[i][j];
                }
            }
            generateNumber();
            break;
        }
        case 's': {
            for (int o = 0; o < 4; ++o) {
                //第一步，将向着该方向上的空隙填上
                for (int i = 3; i >= 0; --i) {
                    for (int j = 3; j >= 0; --j) {
                        if (fieldCopy[j][i] == 0) {
                            continue;
                        }
                        for (int k = j + 1; k < 4; ++k) {
                            if (fieldCopy[k][i] == 0) {
                                fieldCopy[k][i] = fieldCopy[j][i];
                                fieldCopy[j][i] = 0;
                                j++;
                            }
                        }
                    }
                }
                //第二步，合并相同的数字
                for (int i = 3; i >= 0; --i) {
                    for (int j = 0; j < 4; ++j) {
                        if (fieldCopy[j][i] == 0) {
                            continue;
                        }
                        if (fieldCopy[j][i] == fieldCopy[j + 1][i]) {
                            fieldCopy[j + 1][i] *= 2;
                            fieldCopy[j][i] = 0;
                        }
                    }
                }
                //第三步，将合并后产生的空隙填上
                for (int i = 3; i >= 0; --i) {
                    for (int j = 3; j >= 0; --j) {
                        if (fieldCopy[j][i] == 0) {
                            continue;
                        }
                        for (int k = j + 1; k < 4; ++k) {
                            if (fieldCopy[k][i] == 0) {
                                fieldCopy[k][i] = fieldCopy[j][i];
                                fieldCopy[j][i] = 0;
                                j++;
                            }
                        }
                    }
                }
            }
            //第四步，将运算结果写入field
            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
                    field[i][j] = fieldCopy[i][j];
                }
            }
            generateNumber();
            break;
        }
        case 'a': {
            for (int o = 0; o < 4; ++o) {
                //第一步，将向着该方向上的空隙填上
                for (int i = 0; i < 4; ++i) {
                    for (int j = 0; j < 4; ++j) {
                        if (fieldCopy[i][j] == 0) {
                            continue;
                        }
                        for (int k = j - 1; k >= 0; --k) {
                            if (fieldCopy[i][k] == 0) {
                                fieldCopy[i][k] = fieldCopy[i][j];
                                fieldCopy[i][j] = 0;
                                j--;
                            }
                        }
                    }
                }
                //第二步，合并相同的数字
                for (int i = 0; i < 4; ++i) {
                    for (int j = 3; j >= 1; --j) {
                        if (fieldCopy[i][j] == 0) {
                            continue;
                        }
                        if (fieldCopy[i][j] == fieldCopy[i][j - 1]) {
                            fieldCopy[i][j - 1] *= 2;
                            fieldCopy[i][j] = 0;
                        }
                    }
                }
                //第三步，将合并后产生的空隙填上
                for (int i = 0; i < 4; ++i) {
                    for (int j = 0; j < 4; ++j) {
                        if (fieldCopy[i][j] == 0) {
                            continue;
                        }
                        for (int k = j - 1; k >= 0; --k) {
                            if (fieldCopy[i][k] == 0) {
                                fieldCopy[i][k] = fieldCopy[i][j];
                                fieldCopy[i][j] = 0;
                                j--;
                            }
                        }
                    }
                }
            }
            //第四步，将运算结果写入field
            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
                    field[i][j] = fieldCopy[i][j];
                }
            }
            generateNumber();
            break;
        }
        case 'd': {
            for (int o = 0; o < 4; ++o) {
                //第一步，将向着该方向上的空隙填上
                for (int i = 3; i >= 0; --i) {
                    for (int j = 3; j >= 0; --j) {
                        if (fieldCopy[i][j] == 0) {
                            continue;
                        }
                        for (int k = j + 1; k < 4; ++k) {
                            if (fieldCopy[i][k] == 0) {
                                fieldCopy[i][k] = fieldCopy[i][j];
                                fieldCopy[i][j] = 0;
                                j++;
                            }
                        }
                    }
                }
                //第二步，合并相同的数字
                for (int i = 3; i >= 0; --i) {
                    for (int j = 0; j < 4; ++j) {
                        if (fieldCopy[i][j] == 0) {
                            continue;
                        }
                        if (fieldCopy[i][j] == fieldCopy[i][j + 1]) {
                            fieldCopy[i][j + 1] *= 2;
                            fieldCopy[i][j] = 0;
                        }
                    }
                }
                //第三步，将合并后产生的空隙填上
                for (int i = 3; i >= 0; --i) {
                    for (int j = 3; j >= 0; --j) {
                        if (fieldCopy[i][j] == 0) {
                            continue;
                        }
                        for (int k = j + 1; k < 4; ++k) {
                            if (fieldCopy[i][k] == 0) {
                                fieldCopy[i][k] = fieldCopy[i][j];
                                fieldCopy[i][j] = 0;
                                j++;
                            }
                        }
                    }
                }
            }
            //第四步，将运算结果写入field
            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
                    field[i][j] = fieldCopy[i][j];
                }
            }
            generateNumber();
            break;
        }
    }
    int count=0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (field[i][j]==0){
                count++;
            }
        }
    }
    if (count==1||count==0){
        return judge(count);
    }
    return 0;
}

llu getScore(){
    llu score=0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            score+=field[i][j];
        }
    }
    return score;
}