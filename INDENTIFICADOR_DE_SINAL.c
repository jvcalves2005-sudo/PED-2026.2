/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int par, impar,num;
    
    printf("Informe um numero para descobrir se ele é positivo, negativo ou zero: \n");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("negativo");
    }else if (num > 0){
        printf("positivo");
    }else{
        printf("Seu numero é Zero");
    }
    
    return 0;
}