/*Exercício 10.18.3. Baseado no exercício acima, construir um programa que
registre 5 ocorrências.*/


#include <stdio.h>
#include <stdlib.h>

#define nome_arq "grav_struct_2.txt"


struct dados_pessoa
{
	int codigo;
	char nome[61];
	int idade;
	char endereco[61];
	int nrocasa;
}dados[5];


int main()
{
	int i;
	FILE *ptarq;

	ptarq = fopen(nome_arq, "w");

	printf("*** CADASTRO DE PESSOAS ***\n\n");

	if (ptarq != NULL)
	{
		printf("O arquivo %s foi criado com sucesso.\n\n", nome_arq);
		system("pause");
		system("cls");
	}

	else
	{
		printf("O arquivo %s n%co foi criado.\n\n", nome_arq, 198);
		system("pause");
		exit(0);
	}

	for (i=0;i<5;i++)
	{
		printf("	%d%c registro", i + 1, 167);
		printf("\n\nC%cdigo: ", 162);
		scanf("%d", &dados[i].codigo);

		printf("\nNome: ");
		fflush(stdin);
		fgets(dados[i].nome, 60, stdin);

		printf("\nIdade: ");
		scanf("%d", &dados[i].idade);

		printf("\nEndere%co: ", 135);
		fflush(stdin);
		fgets(dados[i].endereco, 60, stdin);

		printf("\nN%cmero da casa: ", 163);
		scanf("%d", &dados[i].nrocasa);

		printf("\n\n");
		system("pause");
		system("cls");

		fprintf(ptarq, "codigo........: %d\nnome..........: %sidade.........: %d\nendereco......: %snumero da casa: %d\n\n",
				dados[i].codigo, dados[i].nome, dados[i].idade, dados[i].endereco, dados[i].nrocasa);
	}

	fclose(ptarq);

	return(0);
}
