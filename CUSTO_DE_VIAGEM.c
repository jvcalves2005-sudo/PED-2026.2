/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

	float kmPorLitro, kmPretendido, valorCombustivel, custoCombustivel, CustoPorPessoa, combustivelNecessario;
	int quantidadePessoas;

	printf("Quantos Km seu carro pecorre por Litro? \n");
	scanf("%f", &kmPorLitro);

	printf("\nQual sera a distancia da viagem?(Em Quilometros!) \n");
	scanf("%f", &kmPretendido);

	printf("\nQuantas pessoa que iram viajar neste carro? \n");
	scanf("%d", &quantidadePessoas);

	printf("\nQuando esta custando o combustivel? \n");
	scanf("%f", &valorCombustivel);

	combustivelNecessario = kmPretendido/kmPorLitro;
	custoCombustivel = combustivelNecessario * valorCombustivel;
	CustoPorPessoa = custoCombustivel/quantidadePessoas;

	printf("\nEm uma viagem de %.2fKm com %d pessoas, o custo por pessoa ficaria R$%.2f", kmPretendido, quantidadePessoas, CustoPorPessoa);

	return 0;
}