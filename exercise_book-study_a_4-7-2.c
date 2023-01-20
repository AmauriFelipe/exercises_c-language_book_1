/*4.7.2. Fazer um programa que calcule a raiz quadrada de um número
fornecido pelo usuário. Usar a tabela ASCII para melhorar a
apresentação das mensagens para o usuário.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int n;
	float raiz;

	printf("Digite um n%cmero inteiro: ", 163);
	scanf("%d", &n);

	raiz = sqrt(n);

	printf("\nA raiz quadrada de %d %c %.3f", n, 130, raiz);

	return (0);
}
