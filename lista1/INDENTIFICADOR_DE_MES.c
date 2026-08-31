/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int mes;
    
    printf("Insira o numero para saber o mês correpondente: \n");
    scanf("%d", &mes);
    
    switch (mes){
        case 1:
            printf("\nJaneiro");
            break;
        case 2:
            printf("\nFevereiro");
            break;
        case 3:
            printf("\nMarço");
            break;
        case 4:
            printf("\nAbril");
            break;
        case 5:
            printf("\nMaio");
            break;
        case 6:
            printf("\nJunho");
            break;
        case 7:
            printf("\nJulho");
            break;
        case 8:
            printf("\nAgosto");
            break;
        case 9:
            printf("\nSetembro");
            break;
        case 10:
            printf("\nOutubro");
            break;
        case 11:
            printf("\nNovembro");
            break;
        case 12:
            printf("\nDezembro");
            break;
        default:
        printf("\nColoque um numero valido 1-12");
    }

    return 0;
}
