/*Exerc�cio 8.9.2. Criar um programa, utilizando uma fun��o, que receba um n�mero
que corresponde a um m�s do ano e escreva o m�s correspondente. Caso o usu�rio
digite o n�mero fora do intervalo, dever� aparecer inv�lido.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char mes(int n)
{
	char meses[12][10] = {"Janeiro", "Fevereiro", "Mar�o", "Abril", "Maio", "Junho",
					  "Julho", "Agosto", "Setembro", "Outubro", "Novembro",
					  "Dezembro"};

	n >= 0 && n <= 11 ? printf("%s", meses[n]) : printf("Inv%clido", 160);
}


int main(){
	
	int i;

	printf("Digite um valor inteiro correspondente a um m%cs do ano (entre 1 e 12): ", 136);
	scanf("%d", &i);

	mes(i - 1);

	return (0);
}
