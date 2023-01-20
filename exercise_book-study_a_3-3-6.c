/*3.3.6. Desenvolver um programa que mostre os nove primeiros n�meros
da sequ�ncia de FIBONACCI. A s�rie de FIBONACCI tem o seguinte
comportamento: O n�mero do elemento atual � a soma dos dois elementos
anteriores. Os dois primeiros n�meros da sequ�ncia s�o 0 e 1.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{

	setlocale(LC_ALL, "Portuguese");	

	int contador, i1 = 0, i2 = 1, i3 = 0;

	printf("Sequ�ncia de FIBONACCI:");
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
