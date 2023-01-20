/*7.2.7. Montar uma estrutura que faça a simulação de um estoque com
os seguintes dados: valor unitário, quantidade armazenada e
quantidade vendida. Esse controle tem 10 itens. Ao final, imprimir
o valor unitário, quantidade armazenada, quantidade vendida e
quantidade do estoque atual. Se a quantidade vendida for zero, mostrar
a mensagem "Produto Encalhado!".*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct estoque
{
	float valor_un;
	int quant_arm;
	int quant_vend;
}estoque_produto[10];


int main()
{	

	int i, quant_est;

	for (i = 0; i < 10; i++)
	{
		estoque_produto[i].quant_vend = 'n';
		printf("\nValor unit%crio do produto: R$ ", 160);
		scanf("%f", &estoque_produto[i].valor_un);
		printf("Quantidade armazenada: ");
		scanf("%d", &estoque_produto[i].quant_arm);
		printf("Quantidade vendida: ");
		while (estoque_produto[i].quant_vend > estoque_produto[i].quant_arm || estoque_produto[i].quant_vend == 'n')
		{
			scanf("%d", &estoque_produto[i].quant_vend);
			estoque_produto[i].quant_vend > estoque_produto[i].quant_arm
			? printf("[ERRO] Quantidade vendida n%co pode ser maior do que a armazenada."
				     "\n	Tente novamente: ", 198) : 0;
		}
	}

	printf("\n\nLista de produtos");

	for (i = 0; i < 10; i++)
	{
		printf("\n\nProduto %d:", i + 1);
		printf("\n	Valor unit%crio: R$ %.2f", 160, estoque_produto[i].valor_un);
		printf("\n	Quantidade que foi armazenada: %d", estoque_produto[i].quant_arm);
		printf("\n	Quantidade vendida: %d", estoque_produto[i].quant_vend);

		if (estoque_produto[i].quant_vend == 0)
			printf("\n	PRODUTO ENCALHADO!!!");
		else
			printf("\n	Quantidade restante: %d", estoque_produto[i].quant_arm - estoque_produto[i].quant_vend);
	}

	return (0);
}
