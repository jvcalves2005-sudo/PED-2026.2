/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1,num2,num3;
    
    printf("Informe três numeros para descobrir qual deles é o maior: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    
    if (num1 >= num2 && num1 >= num3){
        printf("%d é o seu maior numero!", num1);
    }else if (num2 >= num1 && num2 >= num3){
        printf("%d é o seu maior numero!", num2);
    }else{
        printf("%d é o seu maior numero!", num3);
    }
    
    return 0;
}