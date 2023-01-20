/*Exercício 8.9.2. Criar um programa, utilizando uma função, que receba um número
que corresponde a um mês do ano e escreva o mês correspondente. Caso o usuário
digite o número fora do intervalo, deverá aparecer inválido.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char mes(int n)
{
	char meses[12][10] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
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
