/*10.18.4. Calcular a velocidade, baseada na distância e no tempo fornecidos
pelo usuário. Essas três informações deverão ser armazenadas no arquivo
valocidade.txt, juntamente com um cabeçalho.

- Cálculo: velocidade = distância / tempo*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	float dist, tempo;
	FILE *ptarq;

	ptarq = fopen("velocidade.txt", "w");

	if (ptarq != NULL)
	{
		printf("O arquivo velocidade.txt foi criado com sucesso.\n\n\n");
		system("pause");
		system("cls");
	}
	else
	{
		printf("O arquivo velocidade.txt n%co foi criado.\n\n\n", 198);
		system("pause");
		exit(0);
	}

	printf("Digite a dist%cncia percorrida em metros: ", 131);
	scanf("%f",&dist);
	printf("\nDigite o tempo decorrido nesse deslocamento em segundos: ");
	scanf("%f",&tempo);
	printf("\nA velocidade foi %.2f m/s", dist/tempo);

	fprintf(ptarq, "DIST%cNCIA\tTEMPO\tVELOCIDADE\n", 182);
	fprintf(ptarq, "%.2f\t    %.2f\t%.2f", dist, tempo, dist/tempo);

	fclose(ptarq);

	printf("\n\n\n	-> Os dados foram gravados no arquivo velocidade.txt.");

	printf("\n\n");
	system("pause");

	return (0);
}
