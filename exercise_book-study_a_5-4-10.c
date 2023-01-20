/*Exercício 5.4.10. Escrever um programa que leia uma matriz 5 x 5
inteira e apresente uma determinada linha da matriz, soicitada
pelo usuário.*/


#include<stdio.h>
#include<stdlib.h>


int main()
{
	int M[5][5], i, j, linha;

	printf("Digite os elementos inteiros da matriz M:\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			printf("\nLinha %d coluna %d: ", i + 1, j + 1);
			scanf("%d", &M[i][j]);
		}

	printf("\n\nDeseja imprimir qual linha da matriz? ");
	scanf("%d", &linha);
	printf("\nImprimindo a linha %d:\n", linha);

	for (j = 0; j < 5; j++)
	{
		printf("%d   ", M[linha - 1][j]);
	}

	return (0);
}
