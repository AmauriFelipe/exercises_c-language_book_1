/*Exercício 9.8.7. Baseando-se no enunciado acima, fazer o mesmo programa
através de uma chamada por referência, utilizando ponteiros para tal fim.*/


#include <stdio.h>
#include <stdlib.h>


float media(float *pn1, float *pn2)
{
	float media, *pm;

	pm = &media;

	*pm = ((*pn1) + (*pn2)) / 2;

	return (*pm);
}


int main()
{
	float n1, n2, *pn1, *pn2;

	pn1 = &n1;
	pn2 = &n2;

	printf("Entre com dois valores:\n-> ");
	scanf("%f", &(*pn1));
	printf("-> ");
	scanf("%f", &(*pn2));

	printf("\nA m%cdia %c %.2f.", 130, 130, media(pn1, pn2));

	return (0);
}
