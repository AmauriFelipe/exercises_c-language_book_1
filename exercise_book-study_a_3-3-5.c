/*3.3.5. Escrever um programa que solicite ao usu�rio 20 sal�rios
e imprima:
O somat�rio dos sal�rios;
O maior sal�rio;
O menor sal�rio.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	float contador, salario, soma, maior, menor;

	printf("Digite 20 sal�rios:\n");

	for (contador = 0; contador <= 20; contador++)
		{
			scanf("%f", &salario);
			soma += salario;
			
			if (salario >= maior)
				maior = salario;
			if (salario <= menor)
				menor = salario;
		}

	printf("A soma �: %.2f\n", soma);
	printf("O menor sal�rio �: %.2f\n", menor);
	printf("O maior sal�rio �: %.2f\n", maior);

	return(0);
}
