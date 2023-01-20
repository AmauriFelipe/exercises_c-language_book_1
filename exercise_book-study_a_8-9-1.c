/*Exercício 8.9.1. Escrever uma função min(a,b) que retorna o menor
valor entre dois números inteiros.*/


#include <stdio.h>
#include <stdlib.h>


int min(int a, int b)
{
	if (a < b)
		return (a);
	else if (b < a)
		return (b);
		else
			return('n'); 
}


int main()
{
	int n1, n2;

	printf("Digite um valor inteiro: ");
	scanf("%d", &n1);
	printf("Digite outro valor inteiro: ");
	scanf("%d", &n2);

	min(n1, n2) != 'n' ?
	printf("O menor desses valores %c %d", 130, min(n1, n2))
	: printf("Esses valores s%co iguais.", 198);


	return (0);
}
