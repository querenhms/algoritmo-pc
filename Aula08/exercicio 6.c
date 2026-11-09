#include <stdio.h>
#include <locale.h>
#define TAM 7

int main()
{
    setlocale(LC_CTYPE, "");
    int i, dias_acima = 0;
    float soma = 0, media, maior, menor,  temperaturas[TAM];

    const char *dias_semana[] = {"segunda", "terã", "quarta", "quinta", "sexta", "sabado", "domingo"};

    for(i = 0; i < TAM; i++){
        printf("Digite a temperatura da [%s]: ", dias_semana[i]);
        scanf("%f", &temperaturas[i]);

        soma += temperaturas[i];
    }
        media = soma / TAM;
        maior = temperaturas[0];
        menor = temperaturas[0];
        for(i = 0; i < TAM; i++){
                if(temperaturas[i] > maior)
                maior = temperaturas[i];
                if(temperaturas[i] < menor)
                menor = temperaturas[i];
                if(temperaturas[i] > media)
                dias_acima++;
    }

    printf("\nMédia: %.2f °C\n", media);
    printf("Maior temperatura: %.2f °C\n", maior);
    printf("Menor temperatura: %.2f °C\n", menor);
    printf("Dias acima da média: %d\n", dias_acima);

    return 0;
}
