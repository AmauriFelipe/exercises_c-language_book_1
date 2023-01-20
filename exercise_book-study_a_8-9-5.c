/*Exercício 8.9.5. Criar uma estrutura que contenha as informações sobre um CD
de música, sendo as informações: Nome da banda, dia do lançamento do CD, mês do
lançamento do CD, ano do lançamento do CD, valor do CD, número de membros da banda,
produtora do CD. Essas informações deverão ser registradas através de uma função.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct cd
{
	char banda[30];
	int dia_lanc;
	int mes_lanc;
	int ano_lanc;
	float preco;
	int n_membros;

}dados_cd;


void grava_dado_cd(int n)
{
	switch (n)
	{
		case 1:
		{
			printf("\nDigite o nome da banda: ");
			fflush(stdin);
			fgets(dados_cd.banda, 30, stdin);
			break;
		}
		case 2:
		{
			printf("\nDigite o dia de lan%camento: ", 135);
			scanf("%d", &dados_cd.dia_lanc);
			break;
		}
		case 3:
		{
			printf("\nDigite o m%cs do lan%camento: ", 136, 135);
			scanf("%d", &dados_cd.mes_lanc);
			break;
		}
		case 4:
		{
			printf("\nDigite o ano do lan%camento: ", 135);
			scanf("%d", &dados_cd.ano_lanc);
			break;
		}
		case 5:
		{
			printf("\nDigite o pre%co do CD: ", 135);
			scanf("%f", &dados_cd.preco);
			break;
		}
		case 6:
		{
			printf("\nDigite o n%cmero de membros da banda: ", 163);
			scanf("%d", &dados_cd.n_membros);
			break;
		}
	}
}


int main()
{
	int i = -1;

		printf("        ===== Resgistro de dados do CD ====="
			   "\n\nQual informa%c%co voc%c deseja gravar?"
			   "\n[1] Nome da banda"
			   "\n[2] Dia de lan%camento"
			   "\n[3] M%cs de lan%camento"
			   "\n[4] Ano de lan%camento"
			   "\n[5] Pre%co do CD"
			   "\n[6] N%cmero de membros da banda"
			   "\n[0] Finalizar", 135, 198, 136, 135, 136, 135, 135, 135, 163);
	
	while (i != 0)
	{
		while (i < 0 || i > 6)
		{
			printf("\n\nOp%c%co: ", 135, 198);
			scanf("%d", &i);
			i < 0 || i > 6 ? printf("\n\nResposta inv%alida! Tente novamente: ", 160) : 0;
		}
	
		grava_dado_cd(i);

		i != 0 ? i = -1 : 0;
	}

	system("pause");
	system("cls");

	printf("          ===== Dados do CD ====="
		   "\n\nNome da banda:              %s"
		   "Data de lan%camento:         %d / %d / %d"
		   "\nPre%co:                      R$ %.2f"
		   "\nN%cmero de membros da banda: %d", dados_cd.banda, 135,
			dados_cd.dia_lanc, dados_cd.mes_lanc, dados_cd.ano_lanc, 135,
			dados_cd.preco, 163, dados_cd.n_membros);
		

	return (0);
}
