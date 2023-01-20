/*3.3.15. Desenvolver um programa para calcular o pre�o de venda
de um autom�vel e para isso, � necess�rio saber as seguintes
informa��es: O modelo do autom�vel, a pot�ncia do motor e o pre�o
de f�brica. O pre�o do autom�vel � calculado pela soma do pre�o de
f�brica mais o valor dos impostos (45% do pre�o de f�brica) e a
percentagem do revendedor (28% do pre�o de f�brica). Se a pot�ncia
do motor for 1.0, haver� um desconto de 10% sobre o pre�o de venda.*/


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
	printf("Digite a pot�ncia do motor: ");
	scanf("%f", &pot_motor);
	printf("Digite o pre�o de f�brica: ");
	scanf("%f", &pr_fabr);
	
	pr_venda = pr_fabr * (1 + imp + perc_rev);
	
	pot_motor == 1 ? pr_venda * (1 - 0.10) : 0;

	printf("\nO pre�o de venda � %.2f", pr_venda);	

	return(0);
}
