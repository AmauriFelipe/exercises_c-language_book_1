/*Exercício 9.8.4. Assumindo que o endereço da variável x foi atribuído
a um ponteiro px, escrever um programa em C que recebe um valor inteiro em x,
sem usar x, divida x por 5 e apresente o resultado final (utilizando para isso,
a variável x).*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int x, *px;

	px = &x;

	printf("Digite um valor inteiro para x: ");
	scanf("%d", &(*px));

	*px /= 5;

	printf("\nO novo valor de x %c %d", 130, *px);

	return (0);
}
