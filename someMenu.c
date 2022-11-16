#include "headers/header1.h"


struct settings setting={0,1};


void help(){
    system("cls");
    printf("按WASD或者上下左右（方向键输入还没做好 :O）来移动数字就行了\n默认一次生成一个数字\n两个相同的数字靠一起会融合\n\n（不会还有人不会玩2048吧）\n");
//    system("pause");
}

void settings(){
    int select=setting.enableScore;
    system("cls");
    printf("游戏相关设置：\n");
    while (1){
        printf("1.是否开启计分功能（0：否  1：是）（当前为%d，留空表示默认）\n",setting.enableScore);
        scanf("%d",&select);
        if (select==1||select==0){
            if (select==1){
                setting.enableScore=1;
            }
            else{
                setting.enableScore=0;
            }
            break;
        }
        else{
            continue;
        }
    }
    select=setting.numberNum;
    while (1){
        printf("2.每次生成数字个数（1：一个  2：两个）（当前为%d，留空表示默认）\n",setting.numberNum);
        scanf("%d",&select);
        if (select==1||select==2){
            if (select==1){
                setting.numberNum=1;
            }
            else{
                setting.numberNum=2;
            }
            break;
        }
        else{
            continue;
        }
    }
    printf("设置完成\n");
}