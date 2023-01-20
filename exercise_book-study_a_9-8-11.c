/*Exercício 9.8.11. Desenvolver um programa que possua a função troca(),
que irá realizar a troca dos valores de duas variáveis.
Essa função recebe os endereços das variáveis passadas pela função main(),
armazenando-os nos ponteiros p1 e p2. Dentro da função, trocam-se os
conteúdos dos endereços apontados, retornando a função chamadora e
apresentando o resultado final.*/


#include <stdio.h>
#include <stdlib.h>


float troca(float *p1, float *p2)
{
	float n3, *p3;

	 p3 = &n3;
	
	*p3 = *p1;
	*p1 = *p2;
	*p2 = *p3;

	return (0);
}


int main()
{
	float x, y, *px, *py;

	px = &x;
	py = &y;

	printf("Digite o valor real da vari%cvel X: ", 160);
	scanf("%f", &x);
	printf("Digite o valor real da vari%cvel Y: ", 160);
	scanf("%f", &y);

	printf("\nX = %.2f, Y = %.2f"
		   "\n\nTrocando...", x, y);

	troca(px, py);

	printf("\n\nX = %.2f, Y = %.2f", x, y);

	return (0);
}
