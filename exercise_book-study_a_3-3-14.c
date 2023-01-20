/*3.3.14.  Desenvolver um programa que calcule o sal�rio de um
funcion�rio e para isso, necessitamos saber: o n�mero de horas
trabalhadas e o n�mero de dependentes do funcion�rio. Considerando
que:
O valor da hora trabalhada � de R$12,00 (doze reais);
O valor para cada dependente � de R$40,00 (quarenta reais);
O desconto de INSS � de 8,5% sobre o sal�rio bruto;
O desconto de IR (Imposto de Renda) � de 5% sobre o sal�rio bruto;
O sal�rio bruto ser� o n�mero de horas trabalhadas vezes o valor
da hora trabalhada;
O programa dever� calcular e mostrar: o sal�rio bruto, os valores
descontados para cada tipo de imposto e, finalmente, qual o
sal�rio l�quido do funcion�rio, que ser� o sal�rio bruto menos os
impostos, mais o valor dos dependentes.*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");

	float ht, s;

	printf("Quantas horas voc� trabalhou esse m�s? ");
	scanf("%f", &ht);
	s = ht * 12 + 40;

	printf("\nSeu sal�rio bruto � R$%.2f", s);
	printf("\nO desconto do INSS vale R$%.2f", s * 0.085);
	printf("\nO desconto de IR vale R$%.2f", s * 0.05);
	printf("\n\nSeu sal�rio l�quido � R$%.2f", s*(1 - 0.085 -  0.05));

	return(0);
}
