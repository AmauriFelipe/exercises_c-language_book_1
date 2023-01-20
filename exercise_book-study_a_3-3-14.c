/*3.3.14.  Desenvolver um programa que calcule o salário de um
funcionário e para isso, necessitamos saber: o número de horas
trabalhadas e o número de dependentes do funcionário. Considerando
que:
O valor da hora trabalhada é de R$12,00 (doze reais);
O valor para cada dependente é de R$40,00 (quarenta reais);
O desconto de INSS é de 8,5% sobre o salário bruto;
O desconto de IR (Imposto de Renda) é de 5% sobre o salário bruto;
O salário bruto será o número de horas trabalhadas vezes o valor
da hora trabalhada;
O programa deverá calcular e mostrar: o salário bruto, os valores
descontados para cada tipo de imposto e, finalmente, qual o
salário líquido do funcionário, que será o salário bruto menos os
impostos, mais o valor dos dependentes.*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");

	float ht, s;

	printf("Quantas horas você trabalhou esse mês? ");
	scanf("%f", &ht);
	s = ht * 12 + 40;

	printf("\nSeu salário bruto é R$%.2f", s);
	printf("\nO desconto do INSS vale R$%.2f", s * 0.085);
	printf("\nO desconto de IR vale R$%.2f", s * 0.05);
	printf("\n\nSeu salário líquido é R$%.2f", s*(1 - 0.085 -  0.05));

	return(0);
}
