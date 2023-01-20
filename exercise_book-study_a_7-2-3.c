/*Exercício 7.2.3. Cirar uma estrutura chamada DadosAluno, que
armazena duas notas e a idade de um aluno. Ler as notas e a idade
do aluno e armazenar na variável criada na struct; exibir na tela a
média das notas e a idade do aluno.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct DadosAluno
{
	char nome[50];
	int idade;
	float nota1;
	float nota2;
}aluno;


int main()
{
	float media;	

	printf("Digite o nome do aluno: ");
	fgets(aluno.nome, 49, stdin);
	printf("Digite a idade: ");
	scanf("%d", &aluno.idade);
	printf("\nDigite a 1%c nota: ", 166);
	scanf("%f", &aluno.nota1);
	printf("\nDigite a 2%c nota: ", 166);
	scanf("%f", &aluno.nota2);

	media = (aluno.nota1 + aluno.nota2) / 2;

	printf("\n\n-> Dados do aluno: ");
	printf("\n	Nome: %s", aluno.nome);
	printf("	Idade: %d", aluno.idade);
	printf("\n	M%cdia das notas: %.2f", 136, media);

	return (0);
}
