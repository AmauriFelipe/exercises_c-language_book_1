/*Exercício 5.4.16. A empresa aérea "Voe Bem, Voe Sempre" tem no
aeroporto de Cidadópolis uma tabela contendo os horários de partidas
dos voos para a cidade vizinha nos sete dias da semana. Criar um
programa que possa armazenar os horários dos sete dias da semana
e apresentar os horários do dia solicitado pelo funcionário,
sabendo que, no máximo, são dez horários por dia.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	char dia[7][7] = {"Domingo", "Segunda", "Terça","Quarta",
				   "Quinta", "Sexta", "Sabado"};
	float horario[7][10];
	int i, j, h;

	for (i = 0; i < 7; i++)
	{
		h = 7;
		for (j = 0; j < 10; j++)
		{
			horario[i][j] = h;
			h++;
		}
	}

	printf("Deseja ver os hor%crios de qual dia? "
		   "\n[1] Domingo"
		   "\n[2] Segunda"
		   "\n[3] Terça"
		   "\n[4] Quarta"
		   "\n[5] Quinta"
		   "\n[6] Sexta"
		   "\n[7] S%cbado"
		   "\n\nResposta: ", 160, 160);

	scanf("%d", &i); i--;

	printf("\n\nHor%crios de %s:", 160, dia[i]);

	for (j = 0; j < 10; j++)
		if (horario[i][j] < 10)
			printf("\n0%.2fh", horario[i][j]);
		else
			printf("\n%.2fh", horario[i][j]);

	return (0);
}
