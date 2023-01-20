/*Exercício 8.9.10. Utilizando a linguagem C, desenvolver um programa completo que
implemente 3 funções que façam a leitura da quantidade de flores, preço unitário,
se haverá embalagem e repassar esses dados para a função main (principal). A partir
main, você deve chamar uma quarta função que imprime a taxa de entrega e o preço de
venda. Não deve ser usada struct nesse programa.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define porc_entr 0.05


int quant_flores()
{
	int n;

	printf("Deseja quantas flores? ");
	scanf("%d", &n);

	return n;
}

float preco_un()
{
	int n;

	printf("Qual %c o pre%co unit%crio? R$ ", 130, 135, 160);
	scanf("%d", &n);

	return n;
}

int emb()
{
	int n;

	printf("Haver%c embalagem? "
		   "\n[0] N%co"
		   "\n[1] Sim"
		   "\nResposta: ", 160, 198);
	scanf("%d", &n);

	return n;
}

void exibe_precos(float prec_un, int quant_fl)
{
	float preco_ven = prec_un * quant_fl;

	printf("\nO pre%co de venda %c: R$ %.2f"
		   "\nA taxa de entrega %c: R$ %.2f", 135, 130, preco_ven,
			130, preco_ven * porc_entr);
}


int main()
{
	emb();
	exibe_precos(preco_un(), quant_flores());

	return (0);
}
