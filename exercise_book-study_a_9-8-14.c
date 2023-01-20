/*Exercício 9.8.14. Leitura mensal dos medidores de consumo de energia.
Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos
medidores de consumo. Para cada consumidor, são digitados os seguintes
dados (crie uma estrutura): Número do consumidor, quantidade de kWh consumida
durante o mês e o tipo (código) de consumidor (1 Residencial, preço em reais
por kWh = R$ 0,30; 2 comercial, preço em reai por kWh = R$ 0,50;
3 industrial, preço em reais por kWh = R$ 0,70).
Todos os dados, inclusive os resultados, devem ser gravados em um arquivo
binário até que seja encontrado um consumidor com código / tipo 0 (zero).
Além disso, os cálculos devem ser realizados através de uma função com
passagem por referência e, ao final, deve ser apresentado na tela:
- O total de consumo para os três tipos de consumidor.
- A média de consumo dos tipos 1 e 2.*/


#include <stdio.h>
#include <stdlib.h>


struct consumo
{
	int codigo;
	int qtdkwh;
	int tipo;
} cliente;

float tipo (int *qtd, int *tp)
{
	if (*tp == 1)
		return (*qtd * 0.3);
	else if (*tp == 2)
		return (*qtd * 0.5);
	else
		return (*qtd * 0.7);
}


int main()
{
	int i = 0, cont = 0;
	float custo = 0, total = 0, totle2 = 0;
	FILE *ptarq;

	ptarq = fopen("consumo.bin", "wb");

	if (ptarq == NULL)
	{
		printf("\nImpossivel abrir o arquivo!\n\n");
		system("pause");
		return (0);
	}

	printf("\n* * * LEITURA MENSAL DOS MEDIDORES DE CONSUMO DE ENERGIA * * *\n");

	do
	{
		printf("\nNumero do consumidor ..........: ");
		scanf("%d", &cliente.codigo);
		fflush (stdin);

		if (cliente.codigo != 0)
		{
			printf("\nQuantidade de kWh consumida: ");
			scanf("%d", &cliente.qtdkwh);
			fflush(stdin);

			do
			{
				printf("\nTipo de consumidor");
				printf("\n1 - Residencial, 2 - Comercial e 3 - Industrial");
				printf("\n\nOpcao escolhida ..............:");
				scanf("%d", &cliente.tipo);
				fflush(stdin);
			} while (cliente.tipo != 1 && cliente.tipo != 2 && cliente.tipo != 3);

			custo = tipo(&cliente.qtdkwh, &cliente.tipo);

			fwrite (&cliente.codigo, sizeof(cliente.codigo), 1, ptarq);

			fwrite (&cliente.qtdkwh, sizeof(cliente.qtdkwh), 1, ptarq);

			fwrite (&cliente.tipo, sizeof(custo), 1, ptarq);

			total = custo + total;

			if (cliente.tipo == 1 || cliente.tipo == 2)
			{
				totle2 = custo + totle2;

				cont++;
			}
		}

		system ("cls");
	}while (cliente.codigo != 0);

	fwrite (&total, sizeof(total), 1, ptarq);

	if (cont != 0)
		totle2 /= cont;

	fwrite (&totle2, sizeof(totle2), 1, ptarq);

	system("cls");

	printf("\n\n* * * RESULTADOS OBTIDOS * * *");

	printf("\n\nTotal de consumo para os tres tipos de consumidor: R$ %.2f", total);

	printf("\n\nMedia de consumo dos tipos 1 e 2 ..............: R$ %.2f", totle2);

	printf("\n\n");
	system("pause");

	return (0);
}
