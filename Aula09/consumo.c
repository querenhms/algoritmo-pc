#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    char dias_semana[4];
    float consumo, media, maior_consumo = 0, soma = 0;
    int contador = 0;
    FILE *arquivo = fopen("consumo.txt", "r");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while(fscanf(arquivo, "%3s %f", dias_semana, &consumo) !=EOF){
                    soma += consumo;
                    contador++;
                    if(consumo > maior_consumo)
                        maior_consumo = consumo;
    }

    media = soma / contador;
    printf("Relatório\n");
    printf("Quantidade de registros: %d\n", contador);
    printf("Consumo médio: %.1f\n", media);
    printf("Maior consumo: %.1f\n", maior_consumo);
    fclose(arquivo);

    return 0;
}
