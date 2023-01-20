/*4.7.3. Fazer um programa que receba 12 sal�rios mensais, fa�a um
somat�rio dos mesmos e apresente o total de sal�rios recebidos no
ano, o maior sal�rio e o menor sal�rio. Utilizar o c�digo ASCII para
uma melhor apresenta��o da mensagem para o usu�rio.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	float contador, sal, soma, maior, menor = 0;

	printf("Digite cada um de seus 12 sal%crios do ano passado: \n", 160);

	for (contador = 1; contador <= 12; contador++)
	{
		printf("\n%.f%c: R$", contador, 248);
		scanf("%f", &sal);
		soma += sal;

		sal > maior ? maior = sal : 0;

		if (contador == 1)
			menor = sal;
		else
			if (sal < menor)
				menor = sal;		
	}

	printf("==========================================");
	printf("\nA soma dos sal%crios %c: R$%.2f", 160, 130, soma);
	printf("\nO maior sal%crio foi: R$%.2f", 160, maior);
	printf("\nO menor sal%crio foi: R$%.2f", 160, menor);

return(0);
}
