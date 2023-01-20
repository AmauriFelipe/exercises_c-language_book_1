/*7.2.9. Uma prefeitura municipal necessita fazer uma cotação de
preços em padarias para suprir a necessidade das creches e das
escolas da cidade.
Os produtos a serem cotados podem ser: pão francês 50g, pacote de
bolacha salgada 250 g, pacote de bolacha doce 250 g, biscoitos
sortidos 250 g, pão de queijo. Todos os preços referem-se à unidade.
O peso de cada produto pode variar e essa variação deve ser
registrada pelo programa.
O responsável pela cotação informará os produtos e a quantidade
desejada no início do programa. Vale salientar que a quantidade é a
mesma para todos os itens da cotação. Por lei, a prefeitura deverá
analisar apenas três orçamentos.
O programa deverá analisar os 3 orçamentos e disponibilizar os
seguintes resultados:
Empresas com o valor mais barato e mais caro: Geral (listagem de
todos os produtos e respectivos preços);
Empresas com seus respectivos valores: Por produto (É necessário
gerar um menu com os produtos para que o usuário possa escolher o
produto a ser avaliado).
Deve ser utilizada uma struct para registrar os dados informados.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct dados_produtos
{
	char nome_padaria[30];

	//Nomes dos produtos
	char nome_prod[5][30];

	//Preço dos produtos por unidade
	float pr_prod[5];

	//Peso dos produtos por unidade
	float peso_prod[5];

}produtos[3];


int main()
{
	int i, j, quant, op, op2;
	float soma_pr, maior_pr[2], menor_pr[2];

	menor_pr[0] = 0;
	maior_pr[0] = 0;

	printf("     === Quantidade para cota%c%co de pre%cos ===\n", 135, 198, 135);

		for (i = 0; i < 5; i++)
		{
			printf("\nDigite o nome do %d%c produto: ", i + 1, 167);
			fflush(stdin);
			fgets(produtos[0].nome_prod[i], 30, stdin);
			strcpy(produtos[1].nome_prod[i], produtos[0].nome_prod[i]);
			strcpy(produtos[2].nome_prod[i], produtos[0].nome_prod[i]);
		}

	printf("\n");
	for (i = 0; i < 72; i++)
		printf("=");
	printf("\n");

	printf("\nEntre com a quantidade de produtos (geral) para o c%clculo: ", 160);
	scanf("%d", &quant);

	printf("\n");
	for (i = 0; i < 72; i++)
		printf("=");
	printf("\n");
	
	printf("\n     === Registro de pre%cos por padaria ===\n", 135);

	for (i = 0; i < 3; i++)
	{
		printf("\nNome da padaria: ");
		fflush(stdin);
		fgets(produtos[i].nome_padaria, 30, stdin);	

		for (j = 0; j < 5; j++)
		{
			printf("\n	%d%c produto: %s", j + 1, 167, produtos[i].nome_prod[j]);
			printf("	Digite o peso em Kg: ");
			scanf("%f", &produtos[i].peso_prod[j]);
			printf("	Digite o pre%co: R$ ", 135);
			scanf("%f", &produtos[i].pr_prod[j]);

			soma_pr += produtos[i].pr_prod[j];

			if (soma_pr >= maior_pr[0])
			{
				maior_pr[0] = soma_pr;
				maior_pr[1] = i;
			}else
				if (j = 0 || soma_pr <= menor_pr[0])
				{
					menor_pr[0] = soma_pr;
					menor_pr[1] = i;
				}
		}
	}

	printf("\n");
	for (i = 0; i < 72; i++)
		printf("=");
	printf("\n");

	printf("\n     === Exibi%c%co de resultados ===\n", 135, 198);

	printf("\nEscolha a a%c%co a ser realizada:"
		   "\n[1] Empresas com o valor mais barato e mais caro"
		   "\n[2] Empresas com seus respectivos valores: Por produto "
		   "\nResposta: ", 135, 198);
	scanf("%d", &op);

	switch (op)
	{
		case 1:
		{
			printf("\n	Empresa com produtos mais baratos:");
			printf("%s", produtos[(int)(menor_pr[1])].nome_padaria);
			printf("\n	Pre%cos:", 135);

			for (i = 0; i < 5; i++)
			{
				printf("\n	%s:", produtos[(int)(menor_pr[1])].nome_prod[i]);
				printf("\n		R$ %.2f", produtos[(int)(menor_pr[1])].pr_prod[i]);
			}

			printf("\n\n	Empresa com produtos mais caros:");
			printf("%s", produtos[(int)(maior_pr[1])].nome_padaria);
			printf("\n	Pre%cos:", 135);

			for (i = 0; i < 5; i++)
			{
				printf("\n	%s:", produtos[(int)(maior_pr[1])].nome_prod[i]);
				printf("\n		R$ %.2f", produtos[(int)(maior_pr[1])].pr_prod[i]);
			}

			break;
		}

		case 2:
		{
			printf("\n	Escolha o produto para comparar os pre%cos:\n", 135);

			for (i = 0; i < 5; i++)
			{
				printf("	[%d] %s", i + 1, produtos[0].nome_prod[i]);
			}

			printf("\n	Resposta: ");

			scanf("%d", &op2);

			for (i = 0; i < 3; i++)
			{
				printf("\n\n	Empresa %s", produtos[i].nome_padaria);
				printf("		R$ %.2f", produtos[i].pr_prod[op2]);
			}
		}
	}

	return (0);
}
