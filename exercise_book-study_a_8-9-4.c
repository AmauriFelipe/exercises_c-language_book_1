/*Exerc�cio 8.9.4. Criar uma fun��o que recursivamente calcula a soma dos n�meros
sequenciais entre dois intervalos informados pelo usu�rio.
Exemplos:
O usu�rio fornece os limites 2 e 5; o programa far� 2+3+4+5=14
O usu�rio fornece os limites 1 e 10; o programa far� 1+2+3+4+5+6+7+8+9+10+55*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int soma_lim(int n1, int n2)
{
	if (n1 == n2)
		return n2;
	else
		return n1 + soma_lim(n1 + 1, n2);
}


int main()
{
	int a1, a2, soma;

	printf("Digite o limite inferior: ");
	scanf("%d", &a1);
	printf("Digite o limite superior: ");
	scanf("%d", &a2);

	soma = soma_lim(a1, a2);

	printf("\nA soma dos inteiros entre %d e %d %c %d", a1, a2, 130, soma);

	return (0);
}
