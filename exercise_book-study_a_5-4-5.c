/*Exercício 5.4.5. Dados os vetores A = [10, 11, 12, 13, 14, 15, 16, 17]
e B = [1, 2, 3, 4, 5, 6, 7, 8], fazer um programa para somar os dois
vetores e armazenar o resultado em um vetor C (C[i] = A[i] + B[i]).*/


#include<stdio.h>
#include<stdlib.h>


int main()
{
	int A[8], B[8], C[8];
	int i;

	for (i = 0; i < 8; i++)
		A[i] = i + 10;

	for (i = 0; i < 8; i++)
		B[i] = i + 1;

	for (i = 0; i < 8; i++)
		C[i] = A[i] + B[i];

	printf("\nVetor A:");
	for (i = 0; i < 8; i++)
		printf(" %d", A[i]);

	printf("\nVetor B:");
	for (i = 0; i < 8; i++)
		printf("  %d", B[i]);

	printf("\nVetor C:");
	for (i = 0; i < 8; i++)
		printf(" %d", C[i]);

	return (0);
}
