/*4.7.1. Fazer um programa que solicite ao usu�rio um n�mero e o
expoente deste e apresente o resultado da exponencia��o. Usar a
tabela ASCII para melhorar a apresenta��o das mensagens para o
usu�rio.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int a, b, c;

	printf("Digite um n%cmero inteiro:", 163);
	scanf("%d", &a);
	printf("\nDigite um expoente inteiro para ele: ");
	scanf("%d", &b);

	c = pow(a,b);

	printf("\n%d elevado a %d %c %d", a, b, 130, c);

	return (0);
}
