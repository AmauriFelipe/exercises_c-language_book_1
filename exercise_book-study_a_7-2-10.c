/*Exercício 7.2.10. Em uma pesquisa de campo envolvendo 250
entrevistados, uma editora solicitou os seguintes dados aos
entrevistados: sexo, idade e quantidade de livros que leu no ano de
2009. Fazer um programa que leia os dados digitados pelo usuário e
ao final, calcule e imprima:

a) A quantidade total de livros lidos pelos entrevistados menores de
10 anos.
b) A quantidade de mulheres que leram 5 livros ou mais.
c) A média de idade dos homens que leram menos que 5 livros.
d) O percentual de pessoas que não leram livros.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define quantidade_de_entrevistados 5


struct dados_entrevistado
{
	int sexo;
	int idade;
	int quant_livro;
}entrev[quantidade_de_entrevistados];


int main()
{
	int i = 0, q1, q2, q3, contador;
	float m1, p1;

		for (i = 0; i < quantidade_de_entrevistados; i++)
		{
			printf("     === Quantidade de livros que as pessoas leram em 2009 ===");

			printf("\n\n%d%c entrevistado", i + 1, 167);

			printf("\n	sexo: ");

			while  (entrev[i].sexo != 'm' && entrev[i].sexo != 'f')
			{
				fflush(stdin);
				scanf("%c", &entrev[i].sexo);
				entrev[i].sexo != 'm' && entrev[i].sexo != 'f' ? printf("\x1b[31m" "Op%c%co inv%clida, tente novamente: " "\x1b[0m", 135, 198, 160) : 0;
			}

			printf("\n	idade: ");
			fflush(stdin);
			scanf("%d", &entrev[i].idade);

			printf("\n	Quantidade de livros lidos: ");
			fflush(stdin);
			scanf("%d", &entrev[i].quant_livro);

			system("cls");
		}

	for (i = 0; i < quantidade_de_entrevistados; i++)
	{
//A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
		entrev[i].idade < 10 ? q1 += entrev[i].quant_livro : 0;
//A quantidade de mulheres que leram 5 livros ou mais.
		entrev[i].sexo == 'f' && entrev[i].quant_livro >= 5 ? q2++ : 0;
//A média de idade dos homens que leram menos que 5 livros.
		if (entrev[i].sexo == 'm' && entrev[i].quant_livro < 5)
		{
			contador++;
			m1 += entrev[i].idade;
			i == quantidade_de_entrevistados - 1 ? m1 /= contador : 0;
		}
//O percentual de pessoas que não leram livros.
		if (entrev[i].quant_livro == 0)
		{
			q3++;
			i == quantidade_de_entrevistados - 1 ? p1 = 100 * q3 / quantidade_de_entrevistados : 0;
		}
	}

	printf("     === Resultados ==="
		   "\n\nQuantidade total de livros lidos pelos entrevistados menores de 10 anos: %d"
		   "\n\nQuantidade de mulheres que leram 5 livros ou mais: %d"
		   "\n\nM%cdia de idade dos homens que leram menos que 5 livros: %.2f"
		   "\n\nPercentual de pessoas que n%co leram livros: %.2f%", q1, q2, 130, m1, 198, p1);
	

	return (0);
}
