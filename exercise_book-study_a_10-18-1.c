/*Exercício 10.18.1. Desenvolver um programa que armazena no arquivo
raiz_quadrada.txt uma tabela de raízes quadradas dos cem primeiros
inteiros positivos.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int i;
	float n;

	FILE *ptarq;

	ptarq = fopen("raiz_quadrada.txt", "w");

	if (ptarq != NULL)
		printf("Arquivo raiz_quadrada.txt foi criado com sucesso.\n");
	else
	{
		printf("\nO arquivo raiz.quadrada.txt n%co foi criado.", 198);
		system("pause");
		exit(0);
	}

	printf("\n	Gravando dados...\n");

	for (i=1;i<=100;i++)
	{
		n = sqrt(i);
		fprintf(ptarq, "Raiz quadrada de %d: %.3f\n", i, n);
	}

	printf("\n\nFechando o arquivo raiz_quadrada.txt.\n\n");
	fclose(ptarq);
	system("pause");

	return (0);
}
