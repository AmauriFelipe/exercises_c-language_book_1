/*Exercício 5.4.11. Desenvolver um programa que leia uma matriz
5 x 5 inteira e apresente uma determinada coluna da matriz,
solicitada pelo usuário.*/


#include<stdio.h>
#include<stdlib.h>


int main()
{
	int M[5][5];
	int i, j, coluna;

	printf("Digite os elementos da matriz:\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			printf("\nLinha %d, coluna %d: ", i + 1, j + 1);
			scanf("%d", &M[i][j]);
		}

	printf("\n\nDeseja exibir qual coluna? ");
	scanf("%d", &coluna);
	printf("\nMostrando a coluna %d:", coluna);

	for (i = 0; i < 5; i++)
		printf("\n%d", M[i][coluna - 1]);

	return (0);
}
