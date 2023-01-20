/*Exercício 5.4.2. Desenvolver um programa que armazene as alturas
de 5 atletas em um vetor.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i, j;
	char nome[5][20];
	float altura[5];

	for (i = 0; i < 5; i++)
	{
		printf("---------------------------------");
		printf("\nDigite o nome do atleta: ");
		scanf("%s", &nome[i]);
		printf("\nDigite sua altura: ");
		scanf("%f", &altura[i]);
	}

	printf("\n========================================================");

	for (i = 0; i < 5; i++)
		printf("\n\nA altura do atleta %s %c %.2f.", nome[i], 130, altura[i]);

	return (0);
}
