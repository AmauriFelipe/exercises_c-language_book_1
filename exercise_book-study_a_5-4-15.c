/*Exercício 5.4.15. Criar um programa que possa armazenar as alturas
de dez atletas de cinco delegações que participarão das olimpíadas.
Imprimir a maior altura de cada delegação.*/


#include<stdio.h>
#include<stdlib.h>


int main()
{
	float altura[5][10], maior[5][2];
	int i, j;

	for (i = 0; i < 5; i++)
	{
		printf("\n\n%d%c Delega%c%co:", i + 1, 166, 135, 198);

		for (j = 0; j < 10; j++)
		{
			printf("\n	Altura do %d%c atleta: ", j + 1, 167);
			scanf("%f", &altura[i][j]);
			
			if (altura[i][j] > maior[i][1])
			{
				maior[i][1] = altura[i][j];
				maior[i][2] = j;
			}
		}
	}

	printf("================================================");

	for (i = 0; i < 5; i++)
	{
		printf("\n\nMaior altura da %d%c delega%c%co:", i + 1, 166, 135, 198);
		printf("\nAtleta %.f: %.2f metros.", maior[i][2], maior[i][1]);
	}

	return (0);
}
