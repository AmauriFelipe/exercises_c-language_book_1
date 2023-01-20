/*Exercício 6.4.9. Desenvolver um programa que calcule o preço de
venda, preço de custo e valor da taxa de entrega de uma floricultura.
Para isso, deve-se saber: a quantidade de flores vendidas, o preço
unitário e se haverá embalagem para presente (Sim ou Não). O preço
de custo será a quantidade de flores vezes o preço unitário. A taxa
de entrega será de 5% sobre o preço de custo. Finalmente, o preço de
venda, será o preço de custo mais o valor da taxa de entrega.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char op[4];
	float pr_un, pr_v, pr_c, taxa_entr, quant;

	printf("Deseja quantas flores? ");
	scanf("%f", &quant);
	fflush(stdin);
	printf("\nQual %c o pre%co unit%crio? R$ ", 130, 135, 160);
	scanf("%f", &pr_un);
	fflush(stdin);
	printf("\nH%c embalagem para presente? ", 160);
	fgets(op, 3, stdin);
	
	pr_c = pr_un * quant;
	taxa_entr = pr_c * 0.05;
	pr_v = pr_c + taxa_entr;

	printf("\n\nO pre%co de custo %c R$ %.2f"
		   "\nA taxa de entrada %c R$ %.2f"
		   "\nO pre%co de venda %c R$ %.2f", 135, 130, pr_c, 130, taxa_entr, 135, 130, pr_v);

	return (0);
}
