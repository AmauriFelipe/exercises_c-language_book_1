/*Exercício 5.4.24. Fazer um programa que leia os elementos de uma
matriz inteira 10 x 10 e escreva os elementos da matriz, que estão
abaixo (triângulo inferior) da diagonal secundária.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int M[10][10], i, j;

	printf("Entre com os valores inteiros da matriz 10 x 10:");

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			printf("\nLinha %d, coluna %d: ", i + 1, j + 1);
			scanf("%d", &M[i][j]);
		}

	printf("\nTri%cngulo inferior da diagonal secund%cria:", 131, 160);

	for (i = 0; i < 10; i++)
	{
		printf("\n");
		
		for (j = 0; j < 10; j++)
			i >= 10 - j ? printf("   %d   ", M[i][j]) : printf("       ");
	}

	return (0);
}
