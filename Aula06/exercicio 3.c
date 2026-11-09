#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int num, soma = 0;

    do {
        printf("\nDigite um número inteiro (0 para encerrar): ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            continue;
        }
        soma += num;

    } while (num>0);

    printf("\nSoma dos números ímpares: %d", soma);

    return 0;
}
