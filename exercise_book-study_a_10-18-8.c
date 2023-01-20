/*Exercício 10.18.8. Baseado no exercício anterior, desenvolver um programa
que realize a consulta dos dados no arquivo binário.*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	char linha[30];
	int i;

	FILE *ptarq;

	ptarq = fopen("registro_pessoa.bin", "rb");

	if(ptarq != 0)
	{
		printf("O arquivo registro_pessoa.bin foi aberto com sucesso.\n\n");
		system("pause");
		system("cls");
	}
	else
	{
		printf("O arquivo registro_pessoa.bin n%co foi aberto.\n\n", 198);
		system("pause");
		exit(0);
	}

	fread(linha, sizeof(linha), 1, ptarq);

	for(i=0;i<30;i++)
		printf("%c", linha[i]);

	fclose(ptarq);

	return(0);
}
