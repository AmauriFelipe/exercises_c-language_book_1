/*Exercício 5.4.6. Escrever um programa que leia 5 números reais e
imprima-os na ordem inversa.*/


#include<stdio.h>
#include<stdlib.h>


int main()
{
	float n[5];
	int i;

	printf("Entre com 5 n%cmeros reais:\n", 163);
	for (i = 0; i < 5; i++)
		scanf("%f", &n[i]);

	printf("\nEsses n%cmeros em ordem inversa s%co:", 163, 198);
	for (i = 4; i >= 0; i--)
		printf("\n%.2f", n[i]);

	return (0);
}
