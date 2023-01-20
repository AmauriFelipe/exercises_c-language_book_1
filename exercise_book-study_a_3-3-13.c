/*3.3.13. Fazer um programa que receba 25 votos dos eleitores
para os candidatos � presid�ncia. Al�m dos candidatos, existe o voto
em branco e nulo. Cada candidato possui um n�mero especificado
abaixo:
Bill Gates - n�mero 1;
Linus Torvalds - n�mero 2;
Steve Jobs - n�mero 3;
Voto em branco - n�mero 0;
Voto nulo - n�mero 9.
O programa, ap�s receber os 25 votos, dever� apresentar o total
de votos de cada candidato, votos em branco, votos nuloes e
apresentar o candidato vencedor.*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
	setlocale(LC_ALL, "Portuguese");

	int voto, o1, o2, o3, o0, o9, i;

	for (i = 1; i < 26; i++)
	{
	printf("- - - - VOTA��O PARA A PRESID�NCIA DE ANGOLA - - - -"
		   "\n"
		   "\n                     Op��es:"
		   "\nBill Gates - n�mero 1;"
		   "\nLinus Torvalds - n�mero 2;"
		   "\nSteve Jobs - n�mero 3;"
		   "\nVoto em branco - n�mero 0;"
		   "\nVoto nulo - n�mero 9."
		   "\n"
		   "\nResposta: ");

		scanf("%d", &voto);
		
		switch (voto)
		{
			case 0:
				o0++;
				break;
	
			case 1:
				o1++;
				break;
	
			case 2:
				o2++;
				break;
	
			case 3:
				o3++;
				break;
	
			case 9:
				o9++;
				break;

			default:
			{
				printf("\nVoto inv�lido, tente novamente.\n");
				i--;
				break;
			}
		}
		
		system("pause");

		system("cls");
	}

	system("pause");
	
	printf("\nResultado das vota��es: "
		   "\nBill Gates: %d"
		   "\nLinus Torvalds: %d"
		   "\nSteve Jobs: %d"
		   "\nVoto em branco: %d"
		   "\nVoto nulo: %d", o1, o2, o3, o0, o9);

	return(0);
}
