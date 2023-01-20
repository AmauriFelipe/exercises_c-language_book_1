/*Exercício 6.4.2. Fazer um programa que leia uma string e troque
todos os caracteres por letras maiúsculas.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char string[100];

	printf("Entre com uma frase ou palavra: ");
	fgets(string, 100, stdin);
	fflush(stdin);

	printf("\n\n%s", strupr(string));
	return (0);
}
