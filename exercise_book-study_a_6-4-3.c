/*Exerc�cio 6.4.3. Fazer um programa que receba uma string e o tipo
de convers�o que o usu�rio deseja que a string sofra, que poder� ser
letras (m)ai�sculas ou mi(n)�sculas. Observe que o campo (vari�vel)
tipo de convers�o dever� ser validado.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char texto[100];
	char tipo[1];

	printf("Entre com uma frase ou palavra: ");
	gets(texto);
	fflush(stdin);

	printf("\n\nDeseja converter para que tipo:"
		   "\n[m] Mai%csculas"
		   "\n[n] Min%csculas"
		   "\nResposta: ", 163, 163);

	while (strcmp("m", tipo) != 0 && strcmp("n", tipo) != 0)
	{
		fgets(tipo, 2, stdin);

		strcmp("m", tipo) != 0 && strcmp("n", tipo) != 0
		? printf("Digite uma resposta v%clida: ", 160) : 0;
	}

	printf("\n\n");

	puts(tipo);
	puts(texto);
	
	if (strcmp("m", tipo) == 0)
		puts(strupr(texto));

	else
		if (strcmp("n", tipo) == 0)
			puts(strlwr(texto));

	return (0);
}
