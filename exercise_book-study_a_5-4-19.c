/*Exercício 5.4.19. Desenvolver um programa que leia os elementos de
uma matriz inteira 10 x 10 e escreva os elementos da matriz, exceto os
elementos da diagonal principal.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int M[10][10];
	int i, j;

	printf("Digite os valores inteiros da matriz 10 x 10:\n");

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			printf("\nLinha %d, coluna %d: ", i + 1, j + 1);
			scanf("%d", &M[i][j]);
		}

	printf("Matriz sem sua diagonal principal:\n");

	for (i = 0; i < 10; i++)
	{
		printf("\n");

		for (j = 0; j < 10; j++)
		{
			i == j ? printf("       ") : printf("   %d   ", M[i][j]);
		}
	}

	return (0);
}
