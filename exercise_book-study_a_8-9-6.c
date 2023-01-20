/*Exerc�cio 8.9.6. Foi realizada uma pesquisa entre 500 habitantes de certa
regi�o. De cada habitante, foram coletados os dados: idade, sexo, sal�rio e
n�mero de filhos. Criar uma estrutura de dados adequada para armazenar estas
informa��es e fazer uma fun��o que receba e armazene as informa��es digitadas
pelo usu�rio na estrutura de dados criada. Fazer tamb�m uma segunda fun��o que
calcula a m�dia do sal�rio dos habitantes, apresentando-a ao final do programa.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define n 5


struct dados_hab
{
	int idade;
	int sexo;
	float salario;
	int num_fil;
}hab[n];


void grava_dado(int i)
{
	printf("	Idade: ");
	scanf("%d", &hab[i].idade);
	printf("	Sexo [m/f]: ");
	fflush(stdin);
	scanf("%c", &hab[i].sexo);
	printf("	Sal%crio: ", 160);
	scanf("%f", &hab[i].salario);
	printf("	N%cmero de filhos: ", 163);
	scanf("%d", &hab[i].num_fil);
}


float media_sal()
{
	float media;
	int i;

	for (i = 0; i < n; i++)
	{
		media += hab[i].salario;
	}

	media /= i;

	return media;
}


int main ()
{
	int i;

	printf("===== COLETA DE DADOS =====\n");

	for (i = 0; i < n; i++)
	{
		printf("\n-> Pessoa %d\n", i + 1);
		grava_dado(i);
	}

	system("pause");
	system("cls");

	printf("M%cdia dos sal%crios: R$ %.2f", 130, 160, media_sal());

	return (0);
}
