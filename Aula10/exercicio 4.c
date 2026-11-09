#include <stdio.h>
#include <locale.h>

float calcular_area(float largura, float comprimento)
{
    return largura * comprimento;
}

int main()
{
    setlocale(LC_CTYPE, "");

    float largura, comprimento, area;
    char continuar;

    do
    {
        printf("Digite a largura (m): ");
        scanf("%f", &largura);

        printf("Digite o comprimento (m): ");
        scanf("%f", &comprimento);

        area = calcular_area(largura, comprimento);

        printf("Área: %.1f m²\n", area);

        printf("Deseja calcular outra área (s/n)? ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
