/*Exerc�cio 9.8.3 - Fazer um programa que altere o valor armazenado em uma vari�vel atrav�s do
ponteiro que aponta para a mesma, seguindo as seguintes premissas:
	- A vari�vel n�mero (tipo inteiro) ir� armazenar o valor 35;
	- O ponteiro se chama ptr;
	- Logo no in�cio, apresentar a mensagem (utilizando apenas a vari�vel do
	tipo ponteiro): O ponteiro ptr armazena o endere�o ___ que, \npor sua vez,
	armazena o valor __\n
	- Ap�s a troca do valor, apresentar (utilizando apenas a vari�vel do tipo
	ponteiro): Agora, o ponteiro ptr armazena o endere�o __ que, \por sua vez,
	armazena o valor __\n*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int numero = 35, *ptr;

	ptr = &numero;

	printf("O ponteiro ptr armazena o endere%co %p que,"
		   "\npor sua vez, armazena o valor %d\n", 135, ptr, *ptr);

	*ptr = 10;

	printf("\nAgora, o ponteiro ptr armazena o endere%co %p que,"
		   "\npor sua vez, armazena o valor %d", 135, ptr, *ptr);

	return (0);
}
