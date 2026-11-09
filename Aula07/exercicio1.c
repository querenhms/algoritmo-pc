#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    int qnt, i = 1, positivos = 0, negativos = 0;
    float num, maior;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &qnt);

    while (i <= qnt) {
        printf("Digite o %dº valor: ", i);
        scanf("%f", &num);

        if (num > 0) {
            positivos += 1;
        }

        if (num < 0) {
            negativos += 1;
        }

        if (i == 1) {
            maior = num;
        }

        if (num > maior) {
            maior = num;
        }

        i++;
    }

    printf("\nQuantidade de positivos: %d\n", positivos);
    printf("Quantidade de negativos: %d\n", negativos);
    printf("Maior valor: %.2f\n", maior);

    return 0;
}