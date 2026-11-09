#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_CTYPE, "");
	float peso, altura, imc;

	printf("Qual é o peso da pessoa em kg? ");
	scanf("%f", &peso);

	printf("Qual é altura da pessoa em metros? ");
	scanf("%f", &altura);

	 imc= peso / (altura * altura); // ou imc = peso/pow(altura, 2);

    printf("O Índice de Massa Corporal é: %.2f  kg/m²", imc);
	return 0;
	}
