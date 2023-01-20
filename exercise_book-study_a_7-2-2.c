/*Exercício 7.2.2. Considerando o exercício 1, incluir o campo sexo
de 80 pessoas e, desta, vez, apresentar a relação de pessoas que
possuem o sexo correspndente ao digitado pelo usuário.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct dados
{
	char nome[50];
	int idade;
	int sexo;
}dados_pessoa[80];


int main()
{
	int i, s = 0;

	for (i = 0; i < 80; i++)
	{
		printf("\nDigite o nome da %d%c pessoa: ", i + 1, 166);
		fgets(dados_pessoa[i].nome, 50, stdin);
		printf("Digite o a idade: ");
		scanf("%d", &dados_pessoa[i].idade);
		fflush(stdin);
		printf("Digite o sexo: ");
		while (dados_pessoa[i].sexo != 'm' && dados_pessoa[i].sexo != 'f')
		{
			scanf("%c", &dados_pessoa[i].sexo);
			fflush(stdin);
			dados_pessoa[i].sexo != 'm' && dados_pessoa[i].sexo != 'f' ? printf("Digite 'm' ou 'f': ") : 0;
		}
	}

	printf("\n\nExibir nomes de pessoas com o tipo de sexo solicitado: [m/f] ");
	
	while (s != 'm' && s != 'f')
	{
		scanf("%c", &s);
		fflush(stdin);
		s != 'm' && s != 'f' ? printf("Digite 'm' ou 'f': ") : 0;
	}

	for (i = 0; i < 80; i++)
	{
		dados_pessoa[i].sexo == s ? puts(dados_pessoa[i].nome) : 0;
	}

	return (0);
}
