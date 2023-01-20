/*Exercício 7.2.8. Considerando o registro de um produto de uma loja
contendo as informações de descrição e valor, fazer um programa que,
dado o registro de 50 produtos, os exiba na ordem inversa em que
foram digitados.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct dados_produto
{
	char nome[51];
	char descricao[301];
	float valor;
}produto[50];


int main()
{
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("\n\nNome do %d%c produto: ", i + 1, 167);
		fflush(stdin);
		fgets(produto[i].nome, 50, stdin);
		printf("Descri%c%co: ", 135, 198);
		fflush(stdin);
		fgets(produto[i].descricao, 300, stdin);
		printf("Pre%co: R$ ", 135);
		scanf("%f", &produto[i].valor);
	}

	printf("\n\nLista em ordem decrescente:");

	for (i = 49; i >= 0; i--)
	{
		printf("\n\n%d%c Produto: ", i + 1, 166);
		printf("\n	Nome: %s", produto[i].nome);
		printf("\n	Descri%c%co: %s", 135, 198, produto[i].descricao);
		printf("\n	Pre%co: R$ %.2f", 135, produto[i].valor);
	}

	return (0);
}
