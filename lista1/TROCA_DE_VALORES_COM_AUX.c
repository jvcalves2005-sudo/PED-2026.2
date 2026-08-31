/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, aux;
    
    printf("Escreva o primeiro numero inteiro: \n");
    scanf("%d", &a);
    
    printf("Escreva o segundo numero inteiro: \n");
    scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;
    
    printf("%d,%d", a, b);

    return 0;
}
