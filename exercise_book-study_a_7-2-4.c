/*Exercício 7.2.4. Considerando o exercício 3, criar uma variável que
é um vetor da estrutura DadosAluno. O programa deve calcular a média
e a idade de 10 alunos. Depois, esses dados devem ser exibidos.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct DadosAluno
{
	char nome[51];
	int idade;
	float nota1;
	float nota2;
	float media;
}aluno[10];


int main()
{
	float media;
	int i;

	printf("=========================="
		   "\n    Cadastro de alunos"
		   "\n==========================");

	for (i = 0; i < 10; i++)
	{
		printf("\n\nNome do %d%c aluno: ", i + 1, 167);
		fflush(stdin);
		fgets(aluno[i].nome, 50, stdin);
		printf("Idade: ");
		scanf("%d", &aluno[i].idade);
		printf("1%c nota: ", 166);
		scanf("%f", &aluno[i].nota1);
		printf("2%c nota: ", 166);
		scanf("%f", &aluno[i].nota2);

		aluno[i].media = (aluno[i].nota1 + aluno[i].nota2) / 2;
	}

	printf("\n\nLista de alunos:");

 	for (i = 0; i < 10; i++)
	{
		printf("\n\n	%s", aluno[i].nome);
		printf("	Idade: %d anos", aluno[i].idade);
		printf("\n	Nota m%cdia: %.2f", 136, aluno[i].media);
	}

	return (0);
}
