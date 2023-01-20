/*Exercício 7.2.1. Escrever um programa em linguagem C que leia o
nome e a idade de 80 pessoas. Em seguida, solicitar ao usuário que
digite uma idade e exibir os nomes das pessoas que possuem a idade
fornecida.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct pessoa
{
	char nome[50];
	int idade;
}dados_pessoa[80];


int main()
{
	int i, n;

	for (i = 0; i < 80; i++)
	{
		printf("\nDigite o nome da %d%c pessoa: ", i + 1, 166);
		fgets(dados_pessoa[i].nome, 50, stdin);
		printf("Digite a idade: ");
		scanf("%d", &dados_pessoa[i].idade);
		fflush(stdin);
	}

	printf("\n\nExibir nomes das pessoas com a idade digitada: ");
	scanf("%d", &n);
	fflush(stdin);

	for (i = 0; i < 80; i++)
		dados_pessoa[i].idade == n ? printf("\n%s", dados_pessoa[i].nome) : 0;

	return(0);
}
