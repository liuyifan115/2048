#include "headers/header1.h"

void outPut(){
    printf(" ___   ___  _  _   ___  \n"
           "|__ \\ / _ \\| || | / _ \\ \n"
           "   ) | | | | || || (_) |\n"
           "  / /| | | |__   _> _ < \n"
           " / /_| |_| |  | || (_) |\n"
           "|____|\\___/   |_| \\___/ \n\n");
    printf("h����Ϸ����  n�����ã���û����  m����߷֣���û����\n\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%-6llu",field[i][j]);
        }
        printf("\n\n\n");
    }
}
