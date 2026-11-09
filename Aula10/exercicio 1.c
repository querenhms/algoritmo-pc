#include <stdio.h>
#include <locale.h>

float calcular_frete(float peso)
{
    return peso * 4.5;
}

void imprimir_frete(float peso)
{
     printf("Valor do Frete: R$ %.2f\n", calcular_frete(peso));
}

int main()
{
    setlocale(LC_CTYPE, "");

    float peso;
    char resposta;

    while (1) { // looping infinito ou no while-> (resposta == 'n' || resposta == 'N')
                printf("Digite o peso (kg): ");
                scanf("%f", &peso);

                imprimir_frete(peso);//não colocar print, já esta na função

                printf("Deseja calcular outro frete (s/n)? ");
                scanf(" %c", &resposta);
                if (resposta == 'n' || resposta == 'N') //controla o looping
                    break;
    }

    return 0;
}
