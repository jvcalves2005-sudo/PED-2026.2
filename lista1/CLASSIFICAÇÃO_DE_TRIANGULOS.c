/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int lado1,lado2,lado3;
    
    printf("Informe o valor dos 3 lados do triangulo: \n");
    scanf("%d", &lado1);
    scanf("%d", &lado2);
    scanf("%d", &lado3);
    
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){
        printf("\nSeu triangulo é valido!\n");
        if (lado1 == lado2 && lado1 == lado3){
            printf("E seu triangulo é equilátero.");
        }else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
            printf("E seu triangulo é isósceles.");
        }else{
            printf("E seu triangulo é escaleno.");
        }
    }else{
        printf("\nSeu triangulo não é valido");
    }
    
    return 0;
}
