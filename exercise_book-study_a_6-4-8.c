/*Exercício 6.4.8. Escrever um programa que receba o nome, a idade
e o sexo de 12 pessoas. As pessoas que forem do sexo masculino e
maiores de 18 anos deverão ter suas informações adicionadas a uma
lista.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char nome[12][100];
	int n = 0, i, j, idade[12], sexo[12];

	for (i = 0; i < 12; i++)
		sexo[i] = 0;

	for (i = 0; i < 12; i++)
	{
		printf("-------------------------");
		printf("\n%d%c pessoa:", i + 1, 166);
		printf("\nNome: ");
		fgets(nome[i], 100, stdin);
		printf("\nIdade: ");
		scanf("%d", &idade[i]);
		fflush(stdin);
		printf("\nSexo: [m/f] ");

		while (sexo[i] != 'm' && sexo[i] != 'f')
		{
			scanf("%c", &sexo[i]);
			fflush(stdin);
			(sexo[i] != 'm' && sexo[i] != 'f') ? printf("\nDigite 'm' ou 'f': ") : 0;
		}

		idade[i] >= 18 && sexo[i] == 'm' ? n++ : 0;
	}

	char lista_nome[n][100];
	int lista_idade[n], lista_sexo[n];

	for (i = 0; i < n; i++)
	{
		if (idade[i] >= 18 && sexo[i] == 'm' || sexo [i] == 'f')
		{
			for (j = 0; j < 100; j++)
				lista_nome[i][j] = nome[i][j];
			lista_idade[i] = idade[i];
			lista_sexo[i] = sexo[i];
		}
	}

	printf("\n\n========================================="
		   "\nLista de homens maiores de 18 anos:\n");

	for (i = 0; i < n; i++)
	{
		printf("\n\n%s", lista_nome[i]);
		printf("%d anos", lista_idade[i]);
	}

	return (0);
}
