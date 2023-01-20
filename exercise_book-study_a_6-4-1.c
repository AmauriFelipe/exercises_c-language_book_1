/*Exerc�cio 6.4.1. Desenvolver um programa que obtenha as seguintes
informa��es para "n" colegas da sua turma de Programa��o Modular:

nome      -> char nome[15];
sobrenome -> char sobrenome[30];
endere�o  -> char endereco[80];
telefone  -> char telefone[8];
idade     -> char idade[3];

Ap�s, realizar as seguintes tarefas:
Copiar o nome do seu colega para uma vari�vel denominada nome_compl;
Concatenar o sobrenome � vari�vel nome_compl;
Obter o tamanho da vari�vel nome_compl;
Imprimir todas as informa��es de cada um dos seus colegas na tela.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int i, j, n;

	printf("Deseja inserir os dados de quantos colegas? ");
	scanf("%d", &n);
	fflush(stdin);

	char nome[n][15], sobrenome[n][30], endereco[n][80], telefone[n][8], idade[n][3], nome_compl[n][45];

	for (i = 0; i < n; i++)
	{
		printf("\n\n%d%c PESSOA", i + 1, 166);

		printf("\nNome: ");
		fgets(nome[i], 15, stdin);
		fflush(stdin);

		printf("\nSobrenome: ");
		fgets(sobrenome[i], 30, stdin);
		fflush(stdin);

		printf("\nEndere%co: ", 135);
		fgets(endereco[i], 80, stdin);
		fflush(stdin);

		printf("\nTelefone: ");
		fgets(telefone[i], 8, stdin);
		fflush(stdin);

		printf("\nIdade: ");
		fgets(idade[i], 3, stdin);
		fflush(stdin);

		strcpy(nome_compl[i], nome[i]);
		strcat(nome_compl[i], sobrenome[i]);
	}

	printf("\n\n=====================================================================");
	printf("\nDeseja ver os dados de que pessoa? (Use n%cmeros!) ", 163);
	scanf("%d", &j);
	j--;
	printf("\nDados da pessoa %d:", j + 1);
	printf("\n\nNome: %s", nome[j]);
	printf("Sobrenome: %s", sobrenome[j]);
	printf("Quantidade de caracteres do nome completo: %d", strlen(nome_compl[j]));
	printf("\nEndere%co: %s", 135, endereco[j]);
	printf("Telefone: %s", telefone[j]);
	printf("Idade: %s", idade[j]);

	return (0);
}
