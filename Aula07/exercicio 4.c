#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    int i = 1, qnt_menor = 0;
    char municipio[50];
    float temperatura, soma = 0, media;

    while (i <= 5) {
        printf("Digite o nome do %dº municipio: ", i);
        scanf("%s", municipio);

        printf("Digite a temperatura media: ");
        scanf("%f", &temperatura);

        soma += temperatura;

        if (temperatura < 10) {
            qnt_menor += 1;
        }

        i++;
    }

    media = soma / 5;

    printf("\nTemperatura media da regiao: %.2f °C\n", media);
    printf("Quantidade de municipios abaixo de 10 °C: %d\n", qnt_menor);

    return 0;
}