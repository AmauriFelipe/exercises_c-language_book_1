/*Exerc�cio 6.4.6. Sem usar as fun��es de string, fazer um programa
para contar quantos caracteres s�o diferentes do caracter espa�o em
uma frase.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char string[100];
	int i, cont = 0, caracter = 0;

	caracter = ' ';

	printf("Entre com uma palavra ou frase: ");
	fgets(string, 100, stdin);

	for (i = 0; i != '\0'; i++)
		string[i] == caracter ? 0 : cont++;

	printf("\nTem %d caracteres diferentes de espaco.", cont);

	return (0);
}
