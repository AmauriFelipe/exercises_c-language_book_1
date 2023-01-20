/*Exercício 5.4.13. Escrever um programa que leia os elementos
para uma matriz A[4][4] e para uma matriz B[4][4], gere e imprima
uma matriz SOMA[4][4]. Todos do tipo inteiro.*/


#include<stdio.h>
#include<stdlib.h>



int main()
{
	int A[4][4], B[4][4], SOMA[4][4];
	int i, j, k;
	char w[2] = {'A', 'B'};

	printf("==============================="
		   "\n      SOMADOR DE MATRIZES"
		   "\n===============================\n");


	for (k = 0; k < 2; k++)
	{
		printf("\nDigite os elementos inteiros da matriz %c:\n", w[k]);
	
		for (i = 0; i < 4; i++)
			for (j = 0; j < 4; j++)
			{
				printf("Coluna %d, linha %d: ", i + 1, j + 1);
				if (k == 0)
					scanf("%d", &A[i][j]);
				else
					if (k == 1)
						scanf("%d", &B[i][j]);
			}
	}

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			SOMA[i][j] = A[i][j] + B[i][j];

	printf("\n\nMatriz soma:\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("    %d    ", SOMA[i][j]);
		printf("\n");
	}

	return (0);
}
