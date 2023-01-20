/*Exercício 5.4.3. Inicializar um vetor com os valores 1, 2, 3, 4,
5, 6, 7, 8, 9, 10 e depois apresentar os respectivos valores
através do uso do vetor.*/


#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i, v[10];

	for (i = 0; i < 10; i++)
		v[i] = i + 1;

	for (i = 0; i < 10; i++)
		printf("%d", v[i]);

	return (0);
}
