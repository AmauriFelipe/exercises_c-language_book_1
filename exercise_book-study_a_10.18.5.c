/*10.18.5. Escrever um programa que abra um arquivo texto (com conteúdo),
somente para leitura, e conte o número de caracteres presentes nele.
Imprimir o número de caracteres na tela.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int n;
	char linha[100], *c;
	FILE *ptarq;

	ptarq = fopen("velocidade.txt", "r");

	if (ptarq != NULL)
	{
		printf("O arquivo velocidade.txt foi aberto com sucesso.\n\n\n");
		system("pause");
		system("cls");
	}

	else
	{
		printf("O arquivo velocidade.txt n%co foi aberto.\n\n\n", 198);
		system("pause");
		exit(0);
	}

	do
	{
		c = fgets(linha, 2, ptarq);
		n++;
	}while(c != NULL);

	printf("O arquivo possui %d caracteres (incluindo espa%cos).", n, 135);
	printf("\n\nFechando o arquivo velocidade.txt.\n\n");

	fclose(ptarq);

	system("pause");

	return (0);
}
