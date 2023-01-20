/*3.3.11. Fazer um programa que apresente os números de forma
decrescente a partir do número 200 até o número 1.*/


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>


int main()
{
	
	int contador;

	for (contador = 200; contador > 0; contador--)
		printf("\n%d", contador);

	return (0);
}
