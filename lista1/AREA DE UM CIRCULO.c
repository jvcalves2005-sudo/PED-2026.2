/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    
    float raio, area;
    
    printf("Coloque o raio do circulo\n");
    scanf("%f", &raio);
    
    area = M_PI*pow(raio,2);
    
    printf("A area do seu circulo é: %.2f", area);
    
	return 0;
}
