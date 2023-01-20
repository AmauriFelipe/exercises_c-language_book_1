/*Exercício 9.8.5 - Desenvolver um programa em C que receba duas notas e
através do uso de ponteiros, faça a média desses valores e apresente o
resultado através de um ponteiro.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	float n1, n2, *pn1, *pn2;

	pn1 = &n1;
	pn2 = &n2;

	printf("Entre com duas notas: \n");
	scanf("%f", &(*pn1));
	scanf("%f", &(*pn2));

	printf("\nA m%cdia %c %.2f", 130, 130, ((*pn1) + (*pn2)) / 2);

	return (0);
}
