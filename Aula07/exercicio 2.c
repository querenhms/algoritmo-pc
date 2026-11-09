#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    int i = 1;
    float venda, total = 0;

    while (i <= 7) {
        printf("Digite o valor das vendas do %dº dia: ", i);
        scanf("%f", &venda);

        total += venda;

        i++;
    }

    printf("\nTotal vendido na semana: R$ %.2f\n", total);

    return 0;
}