#include "headers/header1.h"

int getInput(){
    int input;
    input=getch();
    switch (input) {
        case 244:{
            input=getchar();
            switch (input) {
                case 72:{
                    return 'w';
                }
                case 80:{
                    return 's';
                }
                case 75:{
                    return 'a';
                }
                case 77:{
                    return 'd';
                }
                default:{
                    return input;
                }
            }
        }
        case 'w':{
            return 'w';
        }
        case 's':{
            return 's';
        }
        case 'a':{
            return 'a';
        }
        case 'd':{
            return 'd';
        }
        case 'h':{
            return 'h';
        }
        case 'n':{
            return 'n';
        }
        case 'b':{
            return 'b';
        }
//        case 'm':{
//            return 'm';
//        }
        default:{
            return input;
        }
    }
}
