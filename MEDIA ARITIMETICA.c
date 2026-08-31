/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	float prova1,prova2,prova3,media;

	char i[100];

	printf("Coloque o nome do aluno: \n");
	scanf(" %s", &i);

	printf("Escreva a nota da prova 1: \n");
	scanf("%f", &prova1);

	printf("Escreva a nota da prova 2: \n");
	scanf("%f", &prova2);

	printf("Escreva a nota da prova 3: \n");
	scanf("%f", &prova3);

	media = (prova1+prova2+prova3)/3;

	printf("A media aritimetica do %s é: %.2f",&i,media);

	return 0;
}
