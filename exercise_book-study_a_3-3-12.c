/*3.3.12. Construir um programa que receba a base e a altura de
um tri�ngulo. Em seguida, calcular a �rea do mesmo e apresent�-la,
lembrando que a f�rmula da �rea �: base vezes altura, dividido por
dois.*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	float l, h;
	
	printf("\nDigite o valor da base do tri�ngulo: ");
	scanf("%f", &l);
	printf("\nDigite o valor da altura do tri�ngulo: ");
	scanf("%f", &h);
	
	printf("\nA �rea do tri�ngulo �: %.2f", l * h);

	return(0);
}
