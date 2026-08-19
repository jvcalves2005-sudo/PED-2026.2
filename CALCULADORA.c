/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	float num1, num2, resultado;
	char sinal;

	printf("Informe o primeiro numero para o calculo\n\n");
	scanf("%f", &num1);
	printf("informe a operação que você deseja realizar\n");
	scanf(" %c", &sinal);
	printf("Informe o segundo numero para finalizar o calculo\n");
	scanf("%f", &num2);

	switch(sinal) {
	case '+':
		resultado = num1 + num2;
		printf("A soma dos numeros é %.2f", resultado);
		break;
	case '-':
		resultado = num1 - num2;
		printf("A subtração dos numeros é %.2f", resultado);
		break;
	case '/':
		if (num2 == 0) {
			printf("Não é possivel dividir por zero!");
		} else {
			resultado = num1 / num2;
			printf("A divisão dos numeros é %.2f", resultado);
		}
		break;
	default:
		printf("Operação invalida!");
	}

	return 0;
}