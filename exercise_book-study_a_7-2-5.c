/*Exerc�cio 7.2.5. Fazer um programa que cria uma estrutura livro,
que cont�m os elementos t�tulo, ano de edi��o, n�mero de p�ginas e
pre�o. Criar uma vari�vel dessa estrutura, que � um vetor de 5
elementos. Ler os valores para a estrutura e imprimir a m�dia do
n�mero de p�ginas dos livros. Caso algum n�mero de p�ginas n�o seja
informado, o mesmo deve ser desconsiderando no c�lculo da m�dia.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct livro
{
	char titulo[51];
	int ano_ed;
	int n_pag;
	float pr;
}dados_livro[5];


int main()
{
	int i, cont = 0;
	float media_pag;	

	printf("====================="
		   "\n   Lista de livros"
		   "\n=====================");

	for (i = 0; i < 5; i++)
	{
		printf("\n\nT%ctulo: ", 161);
		fflush(stdin);
		fgets(dados_livro[i].titulo, 50, stdin);
		printf("Ano da edi%c%co: ", 135, 198);
		scanf("%d", &dados_livro[i].ano_ed);
		printf("N%cmero de p%cginas: (digite 0 para desconhecidos) ", 163, 160);
		scanf("%d", &dados_livro[i].n_pag);
		printf("Pre%co: R$ ", 135);
		scanf("%f", &dados_livro[i].pr);
	}

	for (i = 0; i < 5; i++)
	{
		if (dados_livro[i].n_pag != 0)
		{
			cont++;
			media_pag = dados_livro[i].n_pag;
		}
		i == 4 ? media_pag /= cont : 0;
	}

	printf("\n\nM%cdia de p%cginas: ", 130, 160);
	printf("%.2f", media_pag);
	
	return (0);
}
