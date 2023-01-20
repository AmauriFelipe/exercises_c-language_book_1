/*3.3.15. Desenvolver um programa para calcular o preço de venda
de um automóvel e para isso, é necessário saber as seguintes
informações: O modelo do automóvel, a potência do motor e o preço
de fábrica. O preço do automóvel é calculado pela soma do preço de
fábrica mais o valor dos impostos (45% do preço de fábrica) e a
percentagem do revendedor (28% do preço de fábrica). Se a potência
do motor for 1.0, haverá um desconto de 10% sobre o preço de venda.*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define imp 0.45
#define perc_rev 0.28


int main()
{

	setlocale(LC_ALL, "Portuguese");

	float pr_fabr, pr_venda, pot_motor;
	char modelo[30];
	
	printf("Digite o modelo do carro: ");
	scanf("%s", &modelo);
	printf("Digite a potência do motor: ");
	scanf("%f", &pot_motor);
	printf("Digite o preço de fábrica: ");
	scanf("%f", &pr_fabr);
	
	pr_venda = pr_fabr * (1 + imp + perc_rev);
	
	pot_motor == 1 ? pr_venda * (1 - 0.10) : 0;

	printf("\nO preço de venda é %.2f", pr_venda);	

	return(0);
}
