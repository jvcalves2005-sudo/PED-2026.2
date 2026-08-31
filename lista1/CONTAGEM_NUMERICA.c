/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int num;

	printf("Informe o numero para que seja feita a contagem: \n");
	scanf("%d", &num);

	int i = 1;
	while(i <= num) {
		printf("%d\n", i);
		i++;
	}

	return 0;
}
