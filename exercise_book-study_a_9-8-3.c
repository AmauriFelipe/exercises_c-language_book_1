/*Exercício 9.8.3 - Fazer um programa que altere o valor armazenado em uma variável através do
ponteiro que aponta para a mesma, seguindo as seguintes premissas:
	- A variável número (tipo inteiro) irá armazenar o valor 35;
	- O ponteiro se chama ptr;
	- Logo no início, apresentar a mensagem (utilizando apenas a variável do
	tipo ponteiro): O ponteiro ptr armazena o endereço ___ que, \npor sua vez,
	armazena o valor __\n
	- Após a troca do valor, apresentar (utilizando apenas a variável do tipo
	ponteiro): Agora, o ponteiro ptr armazena o endereço __ que, \por sua vez,
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
