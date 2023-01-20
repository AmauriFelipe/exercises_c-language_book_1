/*3.3.6. Desenvolver um programa que mostre os nove primeiros números
da sequência de FIBONACCI. A série de FIBONACCI tem o seguinte
comportamento: O número do elemento atual é a soma dos dois elementos
anteriores. Os dois primeiros números da sequência são 0 e 1.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{

	setlocale(LC_ALL, "Portuguese");	

	int contador, i1 = 0, i2 = 1, i3 = 0;

	printf("Sequência de FIBONACCI:");
	printf("\n0");
	
	for (contador == 0; contador <= 7; contador++)
	{
		i3 = i1 + i2;
		printf("\n%d", i3);
		i1 = i2;
		i2 = i3;
	}	

return (0);
}
