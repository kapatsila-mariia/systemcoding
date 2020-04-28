#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{

     system("chcp 65001");
    int k;
    scanf("%d",&k) ;
    switch (k) {case 180:
        printf("9-ти голкові матричні \n");
        break;
    case 320 :
    case 330 :
    case 340 :
    case 350 :
    case 360 :
        printf("24-х голкові матричні \n");
        break;
    case 370:
        case 380:
        case 390:
        case 400:
        case 410:
        case 420:
        case 430:
        case 440:
        printf("струменеві \n");
        break;
    default :
        printf("Невідомо\n");
        break;}
    return 0;
}
