/*3.3.11. Fazer um programa que apresente os n�meros de forma
decrescente a partir do n�mero 200 at� o n�mero 1.*/


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
