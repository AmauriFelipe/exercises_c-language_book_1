/*Receber dois números inteiros e mostrar os seguintes resultados:
dividendo, divisor, quociente e o resto.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int a, b, quociente, resto;
	
	printf("Digite um n%cmero inteiro: ", 163);
	scanf("%d", &a);
	printf("Digite outro n%cmero inteiro: ", 163);
	scanf("%d", &b);

	quociente = floor(a / b);
	resto = a % b;

	printf("\nDividendo: %d"
		   "\nDivisor: %d"
		   "\nQuociente: %d"
		   "\nResto: %d", a, b, quociente, resto);

	return(0);
}
