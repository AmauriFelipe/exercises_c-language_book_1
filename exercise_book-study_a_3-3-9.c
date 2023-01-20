/*3.3.9. Desenvolver um programa que apresente a soma dos números
entre 100 e 200.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
	int i, total, contador;

	printf("200 +");

	for (contador == 0; contador < 101; contador++)
	{
		i = 100 + contador;
		total += (i + contador);
	
		printf("\n + %d", i);
	}

	printf("\n= %d", total);

	return(0);
}
