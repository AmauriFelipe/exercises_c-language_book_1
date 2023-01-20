/*Exercício 7.2.6. Fazer um programa que receba três nomes e as
idades das respectivas pessoas (as idades acima de 45 anos devem
ser rejeitadas) em um vetor de estruturas de dados. Após o
recebimento, listar os 3 nomes e as idades que nele foram
armazenados.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct dados_pessoa
{
	char nome[51];
	int idade;
}pessoa[3];


int main()
{
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("Digite o nome: ");
		fflush(stdin);
		fgets(pessoa[i].nome, 50, stdin);
		printf("Digite a idade: (acima de 45 anos ser%c rejeitado) ", 160);
		scanf("%d", &pessoa[i].idade);

		if (pessoa[i].idade > 45)
		{
			printf("	Indiv%cduo rejeitado\n\n", 161);
			i--;
			strcpy(pessoa[i].nome, "");
			pessoa[i].idade = '\0';
		}
	}

	printf("\n\nLista de pessoas:");

	for (i = 0; i < 3; i++)		
	{
		printf("\n\n%s", pessoa[i].nome);
		printf("%d anos.", pessoa[i].idade);
	}

	return (0);
}
