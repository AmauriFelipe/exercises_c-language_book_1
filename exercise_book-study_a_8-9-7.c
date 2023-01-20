/*Exerc�cio 8.9.7. Utilizando a linguagem C, desenvolver um programa completo que
implemente 3 fun��es que fa�am a leitura da idade, peso e altura de uma pessoa,
e repasse esses dados � fun��o main (principal). A partir de main (principal),
voc� deve chamar uma quarta fun��o que imprima a idade e o �ndice de Massa Corporal
dessa pessoa (IMC = peso/altura�). N�o deve ser usada struct nesse programa.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int recebe_idade()
{
	int idade;

	printf("Digite a idade: ");
	scanf("%d", &idade);

	return (idade);
}

float recebe_peso()
{
	float peso;

	printf("Digite o peso: ");
	scanf("%f", &peso);

	return (peso);
}

float recebe_altura()
{
	float altura;

	printf("Digite a altura: ");
	scanf("%f", &altura);

	return (altura);
}

void mostra_IMC(int idade, float peso, float altura)
{
	float imc;

	imc = peso / (altura * altura);

	printf("\nIdade da pessoa: %d anos", idade);
	printf("\nIMC: %.2f", imc);
}


int main()
{
	int idade;
	float peso, altura;

	idade = recebe_idade();
	peso = recebe_peso();
	altura = recebe_altura();

	mostra_IMC(idade, peso, altura);	

	return (0);
}
