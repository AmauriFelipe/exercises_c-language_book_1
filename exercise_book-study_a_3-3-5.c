/*3.3.5. Escrever um programa que solicite ao usuário 20 salários
e imprima:
O somatório dos salários;
O maior salário;
O menor salário.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	float contador, salario, soma, maior, menor;

	printf("Digite 20 salários:\n");

	for (contador = 0; contador <= 20; contador++)
		{
			scanf("%f", &salario);
			soma += salario;
			
			if (salario >= maior)
				maior = salario;
			if (salario <= menor)
				menor = salario;
		}

	printf("A soma é: %.2f\n", soma);
	printf("O menor salário é: %.2f\n", menor);
	printf("O maior salário é: %.2f\n", maior);

	return(0);
}
