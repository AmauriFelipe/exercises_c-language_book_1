/*Exercício 6.4.10. Fazer um programa que leia duas strings (A e B)
e mostre uma terceira string (C) formada pelos caracteres contidos
em A e B de forma intercalada. Exemplo: Se A = 'quarta' e
B = 'segunda', a resposta obtida deverá ser "qsueagrutnada".*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char A[100], B[100], C[200];
	int i;

	printf("Entre com a primeira string: ");
	fgets(A, 99, stdin);
	printf("Entre com a segunda string: ");
	fgets(B, 99, stdin);

	printf("String resultante: ");

	for (i = 0; i < 198; i++)
	{
		i < strlen(A) ? printf("%c", A[i]) : 0;
		i < strlen(B) ? printf("%c", B[i]) : 0;
	}

	return (0);
}
