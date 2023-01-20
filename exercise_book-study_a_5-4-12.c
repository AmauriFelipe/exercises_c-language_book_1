/*Exercício 5.4.12. Criar um programa que leia e imprima os valores
de uma matriz 2 x 3 do tipo inteiro.*/


#include<stdio.h>
#include<stdlib.h>



int main()
{
	int M[2][3];
	int i, j;

	printf("Digite os elementos inteiros da matriz:\n");

	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
		{
			printf("\nLinha %d, coluna %d: ", i + 1, j + 1);
			scanf("%d", &M[i][j]);
		}

	printf("\n\nA matriz que voc%c digitou %c:\n", 136, 130);
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			printf("   %d   ", M[i][j]);

		printf("\n");
	}

	return (0);
}
