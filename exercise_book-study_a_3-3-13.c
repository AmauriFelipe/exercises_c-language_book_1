/*3.3.13. Fazer um programa que receba 25 votos dos eleitores
para os candidatos à presidência. Além dos candidatos, existe o voto
em branco e nulo. Cada candidato possui um número especificado
abaixo:
Bill Gates - número 1;
Linus Torvalds - número 2;
Steve Jobs - número 3;
Voto em branco - número 0;
Voto nulo - número 9.
O programa, após receber os 25 votos, deverá apresentar o total
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
	printf("- - - - VOTAÇÃO PARA A PRESIDÊNCIA DE ANGOLA - - - -"
		   "\n"
		   "\n                     Opções:"
		   "\nBill Gates - número 1;"
		   "\nLinus Torvalds - número 2;"
		   "\nSteve Jobs - número 3;"
		   "\nVoto em branco - número 0;"
		   "\nVoto nulo - número 9."
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
				printf("\nVoto inválido, tente novamente.\n");
				i--;
				break;
			}
		}
		
		system("pause");

		system("cls");
	}

	system("pause");
	
	printf("\nResultado das votações: "
		   "\nBill Gates: %d"
		   "\nLinus Torvalds: %d"
		   "\nSteve Jobs: %d"
		   "\nVoto em branco: %d"
		   "\nVoto nulo: %d", o1, o2, o3, o0, o9);

	return(0);
}
