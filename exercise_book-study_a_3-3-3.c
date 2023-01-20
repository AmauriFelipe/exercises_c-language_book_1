/*Jo�o tem 1,50 metro e cresce 2 cm por ano, enquanto Maria tem 1,10 metro
e cresce 3 cm por ano. Construir um programa que calcule e imprima quantos
anos ser� necess�rios para que Maria seja maior que Jo�o.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float alt_j = 1.50,  alt_m = 1.10, contador;
	
	printf("        Alturas (em metros):\n"
		   "\n"
		   "  Anos passados  |  Jo�o  |  Maria  \n"
		   "------------------------------------\n"
		   "        0        |  1.50  |   1.10  \n");

	do
	{
		alt_j += 0.02;
		alt_m += 0.03;
		contador++;
		
		if (contador<10)
			printf("        %.f        |  %.2f  |   %.2f \n", contador, alt_j, alt_m);
		else
			printf("        %.f       |  %.2f  |   %.2f \n", contador, alt_j, alt_m);
	} while (alt_j >= alt_m);
	
	printf("\nDemoraram %.f anos para Maria ser mais alta que Jo�o.", contador);

	return (0);
}
