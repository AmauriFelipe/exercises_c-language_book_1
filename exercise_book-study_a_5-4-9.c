/*Exerc�cio 5.4.9. Desenvolver um programa que receba 15 n�meros e
mostre o total de n�meros digitados maiores que 5.*/


#include<stdio.h>
#include<stdlib.h>


int main()
{
	float n[15];
	int i, maiores;

	printf("Entre com 15 n%cmeros: \n", 163);

	for (i = 0; i < 15; i++)
	{
		scanf("%f", &n[i]);
		n[i] > 5 ? maiores++ : 0;
	}

	printf("\n\nForam digitados %d n%cmeros maiores que 5:", maiores, 163);

	return (0);
}
