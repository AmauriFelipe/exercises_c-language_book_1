/*Exercício 8.9.8. Criar um tipo conta que representa a conta corrente de um dado
cliente de um banco. O tipo conta deve possuir os seguintes campos:
nome (campo do correntista), numcta(número da conta corrente) e
senha (número correspondente à senha do cliente). Fazer com que o usuário informe
5 contas.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define n 5


struct dados_conta
{
	char nome[30];
	int numcta;
	int senha;
}conta[n];


void grava_conta(int i)
{
	printf("	Digite o nome do usu%crio: ", 160);
	fflush(stdin);
	fgets(conta[i].nome, 30, stdin);
	printf("	Digite o n%cmero da conta: ", 163);
	scanf("%d", &conta[i].numcta);
	printf("	Digite a senha num%crica: ", 130);
	scanf("%d", &conta[i].senha);
}


int main()
{
	int i;

	printf("===== Registro de usu%crios =====\n", 160);

	for (i = 0; i < n; i++)
	{
		printf("\nUsu%crio %d\n", 160, i + 1);
		grava_conta(i);
	}

	return (0);
}
