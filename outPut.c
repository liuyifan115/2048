#include "headers/header1.h"

void outPut(){
    printf(" ___   ___  _  _   ___  \n"
           "|__ \\ / _ \\| || | / _ \\ \n"
           "   ) | | | | || || (_) |\n"
           "  / /| | | |__   _> _ < \n"
           " / /_| |_| |  | || (_) |\n"
           "|____|\\___/   |_| \\___/ \n\n");
    printf("h：游戏帮助  n：设置  m：最高分（还没做）\n\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%-6llu",field[i][j]);
        }
        printf("\n\n\n");
    }
    if (setting.enableScore==1){
        printf("\n当前分数为%llu",score);
    }
}
