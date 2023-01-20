/*Desenvolver um programa que calcule o custo das chamadas
telefônicas e para isso, é necessário saber as seguintes informações:
a quantidade em minutos da ligação, o tipo de aparelho (celular ou
fixo) e o tipo de ligação (local ou interurbana). O programa deverá
calcular e apresentar o total gasto na ligação. Sabendo que:
O custo de 1 minuto para uma ligação local em um aparelho fixo é de
R$ 1,00 e no celular é de R$1,20;
O custo de 1 minuto para uma ligação interurbana em um aparelho
fixo é de R$1,50 e no celular é de R$2,00.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	float tempo, aparelho, ligacao, custo;

	printf("\nQuantos minutos durou a ligação? ");
	scanf("%f", &tempo);
	printf("\nQual o tipo de aparelho?"
		   "\nCelular: [1]"
		   "\nFixo:    [2]"
           "\nResposta: ");
	scanf("%f", &aparelho);
	printf("\nQual o tipo de ligação?"
		   "\nLocal:       [1]"
		   "\nInterurbana: [2]"
		   "\nResposta: ");
	scanf("%f", &ligacao);

	if (aparelho == 1)
	{
		if (ligacao == 1)
			custo = 1.2 * tempo;
		else
			custo = 2 * tempo;
	}
	else
	{
		if (ligacao == 1)
			custo = tempo;
		else
			custo = 1.5 * tempo;
	}
	
	printf("\nA ligação custará R$%.2f", custo);

	return(0);
}
