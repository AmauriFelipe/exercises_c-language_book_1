/*Exerc�cio 6.4.5. Fazer um programa para contar quantos espa�os em
branco existem em uma frase (sem usar as fun��es).*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char frase[100];
	int i, cont = 0;

	printf("\nDigite uma frase: ");
	gets(frase);

	for (i = 0; i <= strlen(frase); i++)
		frase[i] == ' ' ? cont++ : 0;

	printf("O espa%co aparece %d vezes.", 135, cont);

	return (0);
}
