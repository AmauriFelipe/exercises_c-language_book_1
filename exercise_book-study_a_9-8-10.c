/*Exercício 9.8.10. Um programa receba o sexo e, através de uma função,
converte o conteúdo da variável sexo em letras maiúsculas. Desenvolver
uma versão com passagem por valor e outra com passagem por referência.
Não usar funções de conversão, struct ou variáveis globais. Não se
esqueça de validar o campo sexo antes de enviar para a função.*/


#include <stdio.h>
#include <stdlib.h>


int converte(int *s)
{
	*s == 'm' ? *s = 'M' : 0;
	*s == 'f' ? *s = 'F' : 0;

	return *s;
}

int converte2(int s)
{
	s == 'm' ? s = 'M' : 0;
	s == 'f' ? s = 'F' : 0;

	return s;
}


int main()
{
	int s, i, *ps;

	ps = &s;

	for (i = 0; i < 2; i++)
	{
		s = ' ';

		printf("\n\nDigite o sexo [m/f]: ");
	
		while (s != 'm' && s != 'f' && s != 'M' && s != 'F')
		{
			fflush(stdin);
			scanf("%c", &s);
			if (s != 'm' && s != 'f' && s != 'M' && s != 'F')
				printf("\nDigite m ou f: ");
		}
	
		i == 0 ? converte(ps) : converte2(s);
	
		printf("\n%c", s);
	}

	return (0);
}
