/*3.3.10. Fazer um programa que receba um n�mero e mostre
a tabuada de multiplica��o do mesmo.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
	setlocale(LC_ALL, "Portuguese");

	int n, contador;

	printf("Escreva um n�mero inteiro: ");
	scanf("%d", &n);
	printf("\nTabuada do %d:", n);

	for (contador = 1; contador < 11; contador++)
		printf("\n%d * %d = %d", n, contador, n * contador);

	return(0);
}
