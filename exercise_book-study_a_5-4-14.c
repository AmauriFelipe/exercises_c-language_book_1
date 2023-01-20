/*Exercício 5.4.14. Desenvolver um programa que receba os valores para
uma matriz inteira 2 x 3, gere e imprima uma matriz transposta.
Uma matriz transposta é gerada trocando a linha pela coluna.*/


#include<stdio.h>
#include<stdlib.h>



int main()
{
	int M[2][3], T[3][2];
	int i, j;

	printf("Entre com os elementos da matriz:\n");

	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
		{
			printf("\nLinha %d, coluna %d: ", i + 1, j + 1);
			scanf("%d", &M[i][j]);
		}

	for (j = 0; j < 3; j++)
		for (i = 0; i < 2; i++)
			T[j][i] = M[i][j];

	printf("\n\nA transposta dessa matriz %c:\n", 136);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			printf("   %d   ", T[i][j]);
		printf("\n");
	}

	return (0);
}
