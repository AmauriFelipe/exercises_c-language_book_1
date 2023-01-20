/*Exercício 8.9.3. Escrever uma função que receba um número inteiro que representa
um intervalo de tempo medido em minutos e devolva o correspondente número de horas
e minutos (por exemplo, converte 131 minutos em 2 horas e 11 minutos). Usar uma
struct como a seguinte:

struct hm {
	int horas;
	int minutos;
	};*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct hm
{
	int horas;
	int minutos;
} tempo;


int h_m (int temp_min)
{
	int hora;
	float min;

	hora = temp_min / 60;
	min = temp_min % 60;

	printf("%d minutos s%co %d horas e %.0f minutos", temp_min, 198, hora, min);

	return (0);
}


int main()
{
	int tempo;

	printf("Digite a quantidade de minutos: ");
	scanf("%d", &tempo);

	h_m(tempo);

	return (0);
}
