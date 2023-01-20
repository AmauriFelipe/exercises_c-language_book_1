/*Exerc�cio 5.4.7. Desenvolver um programa que receba 12 sal�rios
(um para cada m�s), armazenando os mesmos em um vetor e, ao final,
apresente o total de sal�rios informados, o maior sal�rio e o menor
sal�rio.*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	float sal[12];
	float maior, menor;
	char mes[12][9] =
	{
	"janeiro", "fevereiro", "marco", "abril", "maio", "junho",
	"julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
	};
	int i;

	printf("Entre com o sal%crio do m%cs de:", 160, 136);

	for (i = 0; i < 12; i++)
	{
		printf("\n%s: R$", mes[i]);
		scanf("%f", &sal[i]);

		if (i == 0)
		{
			menor = sal[i];
			maior = sal[i];
		}
		else
			if (sal[i] < menor)
				menor = sal[i];
			if (sal[i] > maior)
				maior = sal[i];
	}

	printf("\ns====================================================================");
	printf("\n\nMaior sal%crio: %.2f", 160, maior);
	printf("\nMenor sal%crio: %.2f", 160, menor);
	printf("\n\nSal%crios:", 160);

	for (i = 0; i < 12; i++)
		printf("\n\n%s: %.2f", mes[i], sal[i]);

	return (0);
}
