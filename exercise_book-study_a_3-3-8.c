/*Desenvolver um programa que calcule o custo das chamadas
telef�nicas e para isso, � necess�rio saber as seguintes informa��es:
a quantidade em minutos da liga��o, o tipo de aparelho (celular ou
fixo) e o tipo de liga��o (local ou interurbana). O programa dever�
calcular e apresentar o total gasto na liga��o. Sabendo que:
O custo de 1 minuto para uma liga��o local em um aparelho fixo � de
R$ 1,00 e no celular � de R$1,20;
O custo de 1 minuto para uma liga��o interurbana em um aparelho
fixo � de R$1,50 e no celular � de R$2,00.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	float tempo, aparelho, ligacao, custo;

	printf("\nQuantos minutos durou a liga��o? ");
	scanf("%f", &tempo);
	printf("\nQual o tipo de aparelho?"
		   "\nCelular: [1]"
		   "\nFixo:    [2]"
           "\nResposta: ");
	scanf("%f", &aparelho);
	printf("\nQual o tipo de liga��o?"
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
	
	printf("\nA liga��o custar� R$%.2f", custo);

	return(0);
}
