#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_CTYPE, "");

	int num1, num2, soma, sub, multi;

	printf("Digite o primeiro número: ");
	scanf("%d", &num1);

	printf("Digite o segundo número: ");
	scanf("%d", &num2);

	soma = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", sub);
    printf("Multiplicação: %d\n", multi);

	return 0;
}
