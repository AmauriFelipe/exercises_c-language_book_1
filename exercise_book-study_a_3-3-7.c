/*3.3.7. Fazer um programa que calcule o peso ideal para cada pessoa
e para isso, precisamos saber: o nome, o sexo e a altura da pessoa.
O programa deverá validar a variável sexo, isto é, apenas permitir
a entrada dos valores "M" ou "F" para este campo. A fórmula para o
cálculo é a seguinte:
Para homens: (72.7 * h) - 58
Para mulheres: (62.1 * h) - 44
Onde h é a altura.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	char sexo, nome[30];
	float altura, peso;

	printf("\nDigite seu nome: ");
	scanf("%s",nome);
	printf("\nDigite sua altura em cm: ");
	scanf("%f", &altura);
	printf("\nDigite seu sexo: m/f ");
	scanf("%s", &sexo);

	switch(sexo)
	{
		case 'f':
			peso = 62.1 * altura / 100 - 44.0;
			break;
		
		case 'm':
			peso = 72.7 * altura / 100 - 58.0;
			break;
		
		default:
			printf("\nOpção inválida!");
			break;
	}

	printf("\n%s, seu peso ideal é %.3f Kg", nome, peso);

	return(0);
}
