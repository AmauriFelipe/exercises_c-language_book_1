/*Exerc�cio 6.4.7. Sem usar as fun��es de string, fazer um programa
para ler uma string e um caracter. Sempre que o caracter lido
aparecer na frase, ele dever� ser substitu�do por asterisco.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char string[100];
	int i, caracter = 0;

	printf("Digite uma palavra ou frase: ");
	gets(string);

	printf("Digite um caracter: ");
	scanf("%c", &caracter);

	for (i = 0; i <= strlen(string); i++)
		string[i] == caracter ? string[i] = '*' : 0;

	printf("\nFrase convertida: %s\n\n", string);

	system("pause");		

	return (0);
}
