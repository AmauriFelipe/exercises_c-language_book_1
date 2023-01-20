/*Exercício 9.8.8. Fazer um programa em C que receba dois valores e,
utilizando ponteiros, retorne o maior e o menor valores. Salienta-se
a necessidade de existir um controle sobre os valores iguais.*/


#include <stdio.h>
#include <stdlib.h>


int main ()
{
	float n1, n2, *pn1, *pn2;

	pn1 = &n1;
	pn2 = &n2;

	printf("Entre com dois valores:\n-> ");
	scanf("%f", &(*pn1));
	printf("-> ");
	scanf("%f", &(*pn2));

	if (*pn1 > *pn2)
		printf("\nO maior valor %c %.2f.", 130, *pn1);
	else if (*pn1 == *pn2)
		printf("\nOs dois vaslores s%co iguais.", 198);
	else
		printf("\nO maior valor %c %.2f.", 130, *pn2);

	return (0);
}
