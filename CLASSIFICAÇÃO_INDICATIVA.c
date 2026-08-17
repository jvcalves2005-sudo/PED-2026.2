/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade;
    
    printf("Informe a sua idade: \n");
    scanf("%d", &idade);
    
    if (idade <= 11){
        printf("Criança");
    }else if (idade <= 17){
        printf("Adolescente");
    }else if (idade <= 59){
        printf("Adulto");
    }else{
        printf("Idoso");
    }
   
 
    
    return 0;
}