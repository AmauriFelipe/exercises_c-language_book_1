/*Exercício 6.4.4. Fazer um programa para ler uma string e contar
quantas vezes um determinado caractere aparece na string. O caracter
deverá ser informado pelo usuário.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char string[100];
	int i = 0, contador = 0, caracter = 0;

	printf("Digite uma palavra ou frase: ");
	gets(string);

	printf("\nDeseja contar a ocorr%cncia de qual caracter? ", 136);
	scanf("%c", &caracter);

	for (i = 0; i <= strlen(string); i++)
		caracter == string[i] ? contador++ : 0;

	printf("\nO caracter %c aparece %d vezes.", caracter, contador);
	return (0);
}
