/*4.7.2. Fazer um programa que calcule a raiz quadrada de um n�mero
fornecido pelo usu�rio. Usar a tabela ASCII para melhorar a
apresenta��o das mensagens para o usu�rio.*/


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
