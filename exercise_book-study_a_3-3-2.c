/*3.3.2. Fazer um programa que solicite ao usu�rio para digitar
valores num�ricos (inteiros) at� que seja digitado um n�mero
negativo e calcule a m�dia dos n�meros positivos digitados.*/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{

	float valor, soma, contador;

	printf("Digite valores. Caso um for negativo, o programa ir� parar e calcular a m�dia.\n");

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
