/*Exercício 10.18.7 - Fazer um programa que grave em um arquivo binário os
dados provenientes da estrutura pessoa (código, nome, cpf, sexo, endereço,
cidade, uf) representada pela variável reg. Ao final do recebimento dos dados,
deve ser apresentada a mensagem: "Deseja incluir novo registro (S/N)?"

Nota: Use a função fseek() para se posicionar no final do arquivo sempre que
forem incluídos novos dados.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct pessoa
{
	int codigo;
	char nome[20];
	int cpf;
	int sexo;
	char endereco[30];
	char cidade[20];
	char uf[3];
}reg;


int main()
{
	int resp = 's';
	FILE *ptarq;

	ptarq = fopen("registro_pessoa.bin", "wb");

	if (ptarq != NULL)
	{
		printf("O arquivo registro_pessoa.bin foi criado com sucesso.\n\n");
		system("pause");
		system("cls");
	}

	else
	{
		printf("O arquivo registro_pessoa.bin n%co foi criado.\n\n", 198);
		system("pause");
		exit(0);
	}

	printf("----- Cadastro de pessoas -----\n\n");

	do
	{
		printf("C%cdigo: ", 162);
		fflush(stdin);
		scanf("%d", &reg.codigo);

		printf("Nome: ");
		fflush(stdin);
		fgets(reg.nome, 20, stdin);

		printf("CPF: ");
		fflush(stdin);
		scanf("%d", &reg.cpf);

		printf("Sexo: ");
		fflush(stdin);
		scanf("%c", &reg.sexo);

		printf("Endere%co: ", 135);
		fflush(stdin);
		fgets(reg.endereco, 30, stdin);

		printf("Cidade: ");
		fflush(stdin);
		fgets(reg.cidade, 20, stdin);

		printf("UF: ");
		fflush(stdin);
		fgets(reg.uf, 2, stdin);

		printf("\n-> Aperte [s] para incluir novo registro ou qualquer outra tecla para finalizar.\n\n");

		fwrite(&reg, sizeof(reg), 7, ptarq);

		fseek(ptarq, 0, SEEK_END);

		resp = getch();
	}while(resp=='s');

	fclose(ptarq);

	return(0);
}
