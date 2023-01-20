/*Exercício 10.18.6. A partir de uma estrutura referente a um estoque de
mercadorias diversas, receber os seguintes dados: código, nome do produto,
valor unitário, quantidade armazenada e quantidade vendida. Este cadastro
deverá ser controlado pelo usuário (deseja continuar (S/N)?). Registrar no
arquivo vendas.txt todas as informações, não esquecendo do cabeçalho
(título e informação armazenada). Se a quantidade vendida for igual a zero,
deverá apresentar (no arquivo) "Produto Encalhado!". Além disso, não poderá
ser vendida uma quantidade maior que a informada no estoque atual.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct dados_mercadoria
{
	int codigo;
	char nome[20];
	float valor;
	int quant_arm;
	int quant_vend;
}mercadoria;


int main()
{
	int resp = 's';
	int n = 0;

	FILE *ptarq;

	ptarq = fopen("vendas.txt", "w");

	if (ptarq != NULL)
	{
		printf("O arquivo vendas.txt foi criado com sucesso.\n\n");
		system("pause");
		system("cls");
	}

	else
	{
		printf("O arquivo vendas.txt n%co foi criado.", 198);
		system("pause");
		exit(0);
	}

	do
	{
		n++;
		mercadoria.quant_vend = 0;

		printf("C%cdigo do produto: ", 162);
		scanf("%d", &mercadoria.codigo);
		printf("Nome do produto: ");
		fflush(stdin);
		fgets(mercadoria.nome, 20, stdin);
		printf("Pre%co do produto: R$ ", 135);
		fflush(stdin);
		scanf("%f", &mercadoria.valor);
		printf("Quantidade inicialmente armazenada: ");
		fflush(stdin);
		scanf("%d", &mercadoria.quant_arm);

		do
		{
		if (mercadoria.quant_vend > mercadoria.quant_arm)
			printf("\nErro. Quantidade vendida maior do que a armazenada.\n\n");

		printf("Quantidade vendida: ");
		scanf("%d", &mercadoria.quant_vend);
		} while (mercadoria.quant_vend > mercadoria.quant_arm || !mercadoria.quant_vend && mercadoria.quant_vend != 0);

		printf("\nDeseja continuar? [s/n] ");
		fflush(stdin);
		scanf("%c", &resp);

		printf("\n--------------------------------------\n");

		fprintf(ptarq, "Produto %d\n", n);
		fprintf(ptarq, "C%cdigo: %d\n", 162, mercadoria.codigo);
		fprintf(ptarq, "Nome: %s", mercadoria.nome);
		fprintf(ptarq, "Pre%co: R$ %.2f\n", 135, mercadoria.valor);
		fprintf(ptarq, "Quantidade armazenada: %d\n", mercadoria.quant_arm);
		if (mercadoria.quant_vend != 0)
			fprintf(ptarq, "Quantidade vendida: %d\n\n", mercadoria.quant_vend);
		else
			fprintf(ptarq, "Produto encalhado!\n\n");

	}while(resp == 's');

	printf("Os dados foram gravados no arquivo vendas.txt.\n\n");

	system("pause");

	return(0);
}
