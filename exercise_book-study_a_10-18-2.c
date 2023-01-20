/*10.18.2. Construir uma estrutura (código, nome, idade, endereço, nrocasa) e,
após cadastrar seus dados, gravar o conteúdo da estrutura no arquivo
grav_struct.txt. Criar um cabeçalho para esse arquivo, contendo o nome
de cada informação armazenada. Utilizar a opção \t para a tabulação entre os
dados do cabeçalho e os dados do registro.*/


#include <stdio.h>
#include <stdlib.h>


struct dados_pessoa
{
	int codigo;
	char nome[61];
	int idade;
	char endereco[61];
	int nrocasa;
}dados;


int main()
{
	FILE *ptarq;

	ptarq = fopen("grav_struct.txt", "w");

	printf("*** GRAVA%c%cO DE DADOS EM ARQUIVO DE TEXTO ***", 128, 199);

	if (ptarq != NULL)
		printf("\n\nO arquivo grav_struct.txt foi criado com sucesso.\n\n\n");
	else
	{
		printf("O arquivo grav_struct.txt n%co foi criado.\n\n", 198);
		system("pause");
		exit(0);
	}

	system("pause");
	system("cls");

	printf("\nC%cdigo ........: ", 162);
	fflush(stdin);
	scanf("%d", &dados.codigo);
	printf("\nNome ..........: ");
	fflush(stdin);
	fgets(dados.nome, 60, stdin);
	printf("\nIdade .........: ");
	scanf("%d", &dados.idade);
	printf("\nEndere%co ......: ", 135);
	fflush(stdin);
	fgets(dados.endereco, 60, stdin);
	printf("\nN%cmero da casa : ", 163);
	fflush(stdin);	
	scanf("%d", &dados.nrocasa);

	fprintf(ptarq, "Cod.\tNome\tIdade\tEndereco\tNro da casa\n");
	fprintf(ptarq, "%d\t%s\t\t%d anos\t %s\t\t%d\n",
			dados.codigo, dados.nome, dados.idade, dados.endereco, dados.nrocasa);

	printf("\n\n");
	fclose(ptarq);
	system("pause");

	return (0);
}
