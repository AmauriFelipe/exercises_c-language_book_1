/*3.3.2. Fazer um programa que solicite ao usuário para digitar
valores numéricos (inteiros) até que seja digitado um número
negativo e calcule a média dos números positivos digitados.*/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{

	float valor, soma, contador;

	printf("Digite valores. Caso um for negativo, o programa irá parar e calcular a média.\n");

	while (valor>=0)
	{
		contador++;
		scanf("\n%f", &valor);
		soma += valor;
	}
	
	float media = soma / contador;
	
	printf("\nA media e': %.2f", media);

    return(0);
}
