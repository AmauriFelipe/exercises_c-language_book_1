/*Exerc�cio 9.8.11. Desenvolver um programa que possua a fun��o troca(),
que ir� realizar a troca dos valores de duas vari�veis.
Essa fun��o recebe os endere�os das vari�veis passadas pela fun��o main(),
armazenando-os nos ponteiros p1 e p2. Dentro da fun��o, trocam-se os
conte�dos dos endere�os apontados, retornando a fun��o chamadora e
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
