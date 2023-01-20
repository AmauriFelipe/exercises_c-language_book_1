/*Exercício 5.4.8. Fazer um programa que receba 10 números inteiros.
Esses números deverão ser adicionados a uma lista e, ao final, o
programa deverá mostrar qual foi o maior número informado.*/


#include<stdio.h>
#include<stdlib.h>


int main()
{
	int maior = 0, i, n[10];

	printf("Digite 10 n%cmeros inteiros:\n", 163);

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &n[i]);
		n[i] > maior ? maior = n[i] : 0;
	}

	printf("\n\nO maior desses n%cmeros %c %d.", 163, 130, maior);

	return (0);
}
