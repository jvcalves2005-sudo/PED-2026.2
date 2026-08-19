/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int ano;
    
    printf("Informe o ano para saber se ele e bissexto: \n");
    scanf("%d", &ano);
    
    if (ano % 4 == 0 && ano % 100 != 0){
        printf("\nSeu ano e bissexto");
    }else{
        printf("\nSeu ano não e bissexto!");
    }

    return 0;
}