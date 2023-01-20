/*3.3.4. Fazer um programa que solicite a idade de um usuário e
imprima na tela uma das mensagens abaixo:
Se a idade for menor ou igual a zero: "Idade inexistente";
Se a idade for maior que zero e menor que 12 anos: "Criança";
Se a idade for maior que 12 e menor que 18 anos: "Adolescente";
Se a idade for maior que 18 e inferior a 70 anos: "Adulto";
Se a idade for maior que 70 anos: "Idoso".*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
	setlocale (LC_ALL, "Portuguese");

	int idade;

	printf("Digite sua idade: ");
	scanf("%d", &idade);

	if (idade <= 0)
		printf("\n\nIdade inexistente.");
	else	

		if (idade > 0 && idade <= 12)
			printf("\n\nCriança.");
		else

			if (idade > 12 && idade <= 18)
				printf("\n\nAdolescente.");
			else

				if (idade > 18 && idade <= 70)
					printf("\n\nAdulto.");
				else
				
					if (idade > 70)
						printf("\n\nIdoso.");

	return(0);
}
