/*3.3.12. Construir um programa que receba a base e a altura de
um triângulo. Em seguida, calcular a área do mesmo e apresentá-la,
lembrando que a fórmula da área é: base vezes altura, dividido por
dois.*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	float l, h;
	
	printf("\nDigite o valor da base do triângulo: ");
	scanf("%f", &l);
	printf("\nDigite o valor da altura do triângulo: ");
	scanf("%f", &h);
	
	printf("\nA área do triângulo é: %.2f", l * h);

	return(0);
}
