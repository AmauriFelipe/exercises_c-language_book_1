/*Exercício 9.8.6 - Fazer um programa que receba dois números float e através
de uma chamada por valor (função), calcule a média, retornando o resultado
para a função main após apresentar o resultado obtido (Não utilizar
struct ou variáveis globais).*/


#include <stdio.h>
#include <stdlib.h>


float media(float n1, float n2)
{
	float media;

	media = (n1 + n2) / 2;

	return media;
}


int main()
{
	float n1, n2;

	printf("Entre com dois valores:\n-> ");
	scanf("%f", &n1);
	printf("-> ");
	scanf("%f", &n2);

	printf("\nA m%cdia %c %.2f.", 130, 130, media(n1, n2));	

	return (0);
}
