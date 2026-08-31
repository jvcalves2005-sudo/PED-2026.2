/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1, valorTotal;
    
    printf("Informe a quantia: \n");
    scanf("%d", &valorTotal);
    
    nota100 = valorTotal / 100;
    valorTotal = valorTotal % 100;
    nota50 = valorTotal / 50;
    valorTotal = valorTotal % 50;
    nota20 = valorTotal / 20;
    valorTotal = valorTotal % 20;
    nota10 = valorTotal / 10;
    valorTotal = valorTotal % 10;
    nota5 = valorTotal / 5;
    valorTotal = valorTotal % 5;
    nota2 = valorTotal / 2;
    valorTotal = valorTotal % 2;
    nota1 = valorTotal;
    
    printf("%d, nota(s) de 100,00\n", nota100);
    printf("%d, nota(s) de 50,00\n", nota50);
    printf("%d, nota(s) de 20,00\n", nota20);
    printf("%d, nota(s) de 10,00\n", nota10);
    printf("%d, nota(s) de 5,00\n", nota5);
    printf("%d, nota(s) de 2,00\n", nota2);
    printf("%d, nota(s) de 1,00\n", nota1);
    
    return 0;
}
