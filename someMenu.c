#include "headers/header1.h"


struct settings setting={0,1};


void help(){
    system("cls");
    printf("��WASD�����������ң���������뻹û���� :O�����ƶ����־�����\nĬ��һ������һ������\n������ͬ�����ֿ�һ����ں�\n\n�����ỹ���˲�����2048�ɣ�\n");
//    system("pause");
}

void settings(){
    int select=setting.enableScore;
    system("cls");
    printf("��Ϸ������ã�\n");
    while (1){
        printf("1.�Ƿ����Ʒֹ��ܣ�0����  1���ǣ�����ǰΪ%d�����ձ�ʾĬ�ϣ�\n",setting.enableScore);
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
        printf("2.ÿ���������ָ�����1��һ��  2������������ǰΪ%d�����ձ�ʾĬ�ϣ�\n",setting.numberNum);
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
    printf("�������\n");
}