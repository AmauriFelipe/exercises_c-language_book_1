/*Exercício 5.4.17. A gerente do salão de beleza "Sempre Bela" tem
uma tabela na qual registra os "pés", as "mãos" e o serviço de
podologia das cinco manicures. Sabendo que cada uma ganha 50% do que
faturou no mês, criar um programa que possa calcular e imprimir
quanto cada uma vai receber.
Os valores cobrados pelos serviços são:
Pés:         R$10,00
Mãos:        R$15,00
Podologia:   R$30,00*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	float manicure[5][3];
	int i, v;
	float lucro;

	printf("=========================================");
	printf("\n   Sal%co de beleza Sempre Bela", 198);
	printf("\n=========================================");

	for (i = 0; i < 5; i++)
	{
		printf("\n\nDigite quantas vezes a %d%c funcion%cria fez o servi%co abaixo: ", i + 1, 166, 160, 135);
		printf("\n	P%cs:", 130);
		scanf("%d", &v);
		manicure[i][0] = v;
		printf("	M%cos:", 198);
		scanf("%d", &v);
		manicure[i][1] = v;
		printf("	Podologia:");
		scanf("%d", &v);
		manicure[i][2] = v;
	}

	for (i = 0; i < 5; i++)
	{
		lucro = (10 * manicure[i][0] + 15 * manicure[i][1] + 30 * manicure[i][2]) / 2;
		printf("\n\nA %d%c funcion%cria receber%c R$%.2f por seus servi%cos.", i + 1, 166, 160, 160, lucro, 135);
	}

	return (0);
}
