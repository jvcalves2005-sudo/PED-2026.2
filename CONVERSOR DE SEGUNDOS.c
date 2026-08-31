/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    
    int minutos, horas, segundos;
    
    printf("Coloque quanto segundos você quer converter: \n");
    scanf("%d", &segundos);
    
    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("%d:%d:%d", horas, minutos, segundos);

	return 0;
}
