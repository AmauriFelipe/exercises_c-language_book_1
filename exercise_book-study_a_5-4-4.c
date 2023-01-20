/*Exercício 5.4.4. Ler 5 inteiros do teclado e armazenar num vetor.
Depois, percorrer esse vetor mostrando os números ímpares.*/


#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i, v[5];

	printf("Digite 5 inteiros:\n");

	for (i = 0; i < 5; i++)
		scanf("%d", &v[i]);

	printf("\nImpares:\n");

	for (i = 0; i <5; i++)
		v[i] % 2 != 0 ? printf("%d\n", v[i]) : 0;

	return (0);
}
