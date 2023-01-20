/*Exerc�cio 8.9.9. Criar um tipo conta que representa a conta corrente de um dado
cliente de um banco. O tipo conta deve possuir os seguintes campos:
nome (nome do correntista), numcta (n�mero da conta corrente) e
senha (n�mero correspondete � senha do cliente). Fazer com que o usu�rio informe
5 contas.
Para testar esse novo tipo, realize as seguintes tarefas:
a) Criar uma fun��o fillconta que preenche os campos com informa��es de um dado
correntista.
b) Criar uma fun��o mostraconta que imprime na tela os dados relativos
ao correntista.
c) Criar uma fun��o validaconta que verifica se o n�mero da conta e a senha
conferem com alguma conta cadastrada.
d) Testar as fun��es desenvolvidas nos itens anteriores atrav�s do programa
principal que realiza as seguintes a��es:
	- Mostra cada um dos elementos da struct chamando a fun��o mostraconta;
	- Pede ao usu�rio um nome e senha, e depois verifica se os mesmos existem
	  usando a fun��o validaconta.
	  Onde:
		Se o usu�rio n�o existir, mostrar� a mensagem "Usu�rio inexistente!";
		Se o usu�rio existir e a senha n�o for adequada, ent�o dever� apresentar
		a mensagem "Usu�rio %s: senha inv�lida!"; e
		Se o usu�rio existir e a senha for correta, apresentar� a mensagem
		"Bem-vindo ao sistema %s!"*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define n 5
#define texto_vermelho "\x1b[31m"
#define texto_verde "\x1b[32m"
#define parada_cor "\x1b[0m"


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


void fillconta(int numcta)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (numcta == conta[i].numcta)
		{
			printf("Digite o novo nome do usu%crio: ", 160);
			fflush(stdin);
			fgets(conta[i].nome, 30, stdin);
			printf("Digite o novo n%cmero de conta: ", 163);
			scanf("%d", &conta[i].numcta);
			printf("Digite a nova senha: ");
			scanf("%d", &conta[i].senha);
		}else 
			printf("\nN%cmero de conta n%co encontrado.", 163, 198);
	}
}


void mostraconta(numcta)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (numcta == conta[i].numcta)
		{
			printf("	Nome: %s", conta[i].nome);
			printf("	N%cmero de conta: %d", 163, conta[i].numcta);
			printf("	Senha: %d", conta[i].senha);
		}
	}
}


int validaconta()
{
	int i = 0, j = 0, k = 0, numcta, senha;

	printf("Digite o n%cmero da conta: ", 163);
	scanf("%d", &numcta);
	printf("Digite a senha: ");
	scanf("%d", &senha);

	for (i = 0; i < n; i++)
	{
		numcta == conta[i].numcta ? j = 1 : 0;
		
		if (senha == conta[i].senha)
		{
			k = 1;
			i = n;
		}		
	}

	if (j == 1)
	{
		if (k == 1)
			printf(texto_vermelho "Usu%crio %s: Senha incorreta" parada_cor, 160, conta[i].nome);
	} else
		printf(texto_vermelho "N%cmero de conta n%co encontrado" parada_cor, 163, 198);
			
}


int main()
{
	int i, r, numcta;

	printf("===== Registro de usu%crios =====\n", 160);

	for (i = 0; i < n; i++)
	{
		printf("\nUsu%crio %d\n", 160, i + 1);
		grava_conta(i);
	}

	printf("\n\n");
	system("pause");
	system("cls");

	printf("Escolha uma a%c%co a ser realizada:"
		   "\n[1] Mostrar uma conta"
		   "\n[2] Mudar dados de uma conta"
		   "\n\nResposta: ", 135, 198);

	scanf("%d", &r);

	switch(r)
	{
		case 1:
		{
			validaconta();
		}
	}

	return (0);
}
