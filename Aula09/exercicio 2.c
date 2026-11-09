#include <stdio.h>
#include <locale.h>

int main()
{
    FILE *arquivo; //ponteiro para o arquivo
    setlocale(LC_CTYPE, "");
    int i, num;
    float consumo;
    char dia [4];

    arquivo = fopen("consumo.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    printf("Dia a quantidade de registros: ");
    scanf("%d", &num);

    for(i = 0; i <num; i++) {
            printf("Digite o dia da semana (Ex: seg): ");
            scanf("%3s", dia); //3s tamanho maximo de 3 | sem '&' pq é vetor
            printf("Qual o consumo da %s: ", dia);
            scanf("%f", &consumo);
            fprintf(arquivo, "%s %2.f\n", dia, consumo);
    }

    printf("Arquivo criado com sucesso!\n");
    fclose(arquivo);

    return 0;
}
