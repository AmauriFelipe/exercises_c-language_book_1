/*Exerc�cio 5.4.1. Inicializar um vetor chamado limpeza de 15
inteiros com o valor zero, apresentando ao final o conte�do de
cada �ndice.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int contador;
	int limpeza[15];

	for (contador = 0; contador < 15; contador++)
		limpeza[contador] = 0;

	for (contador = 0; contador < 15; contador++)
		printf("\nElemento %d: %d", contador, limpeza[contador]);

	return (0);
}
