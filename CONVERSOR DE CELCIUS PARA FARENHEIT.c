/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>



int main()
{

    float C, F;
    
    printf("Coloque os graus Celcius: \n");
    
    scanf("%f", &C);
    
    F = C * 9/5 + 32;
    
    printf("%.2f", F);

}