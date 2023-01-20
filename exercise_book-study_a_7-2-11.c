/*Exercício 7.2.11. Baseando-se no exercício 2, desenvolver o mesmo
programa permitindo ao usuário escolher tipos de consulta diferentes:
Consulta por ordem inversa de registro;
Consulta por idade, ordem crescente;
Consulta por idade, ordem decrescente;
Consulta por sexo e por ordem de sexo.
Ao final, apresentar os dados na ordem original.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 3


struct dados
{
	char nome[50];
	int idade;
	int sexo;
}dados_pessoa[n];


int main()
{
	int i, r, cont, s = 0;

	for (i = 0; i < n; i++)
	{
		printf("\nDigite o nome da %d%c pessoa: ", i + 1, 166);
		fgets(dados_pessoa[i].nome, 50, stdin);
		printf("Digite a idade: ");
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

	for (i = 0; i < n; i++)
	{
		dados_pessoa[i].sexo == s ? puts(dados_pessoa[i].nome) : 0;
	}

	printf("\n\nDeseja que tipo de consulta? "
		   "\n[1] Consulta por ordem inversa de registro"
		   "\n[2] Consulta por idade, ordem crescente"
		   "\n[3] Consulta por idade, ordem decrescente"
		   "\n[4] Consulta por sexo e por ordem de sexo"
		   "\n	Resposta:");

	scanf("%d", &r);

	switch (r)
	{
		case 1:
			for (i = n - 1; i >= 0; i--)
			{
				printf("\nUsu%crio %d:", 160, i + 1);
				printf("\n	Nome: %s", dados_pessoa[i].nome);
				printf("	Sexo: %c", dados_pessoa[i].sexo);
				printf("\n	Idade: %d anos", dados_pessoa[i].idade);
			}
			break;

		case 2:
			while (cont < n)
			{
				b
			}
			break;

		case 3:
			for (i = n - 1; i >= 0; i--)
			{
				
			}
			break;

		case 4:
			for (i = n - 1; i >= 0; i--)
			{
				
			}
			break;
	}

	return (0);
}
