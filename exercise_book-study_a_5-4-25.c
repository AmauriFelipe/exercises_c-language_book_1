/*Exercício 5.4.25. Fazer um programa que leia os elementos de uma
matriz inteira 10 x 10 e escreva os elementos da matriz, exceto a
diagonal secundária*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int M[10][10], i, j;

	printf("Entre com os elementos da matriz 10 x 10:\n");

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			printf("\nLinha %d, coluna %d: ", i + 1, j + 1);
			scanf("%d", &M[i][j]);
		}

	printf("\nMatriz sem a diagonal secund%dria:", 160);

	for (i = 0; i < 10; i++)
	{
		printf("\n\n");

		for (j = 0; j < 10; j++)
			i == 9 - j ? printf("       ") : printf("   %d   ", M[i][j]);
	}

	return (0);
}
