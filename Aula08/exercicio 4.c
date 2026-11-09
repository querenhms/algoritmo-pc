#include <stdio.h>
#include <locale.h>
#define LIN 3
#define COL 4

int main()
{
    setlocale(LC_CTYPE, "");
    int i, j, total_produtos, total_geral = 0;
    int valores[LIN][COL];

    const char *produtos[] = {"café", "coxinha", "bolo"};
    const char *dias_semana[] = {"seg", "ter", "qua", "qui"};

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Digite a qnt do produto %s no dia %s: ",
                   produtos[i], dias_semana[j]);

            scanf("%d", &valores[i][j]);
        }
        printf("\n");
    }

    printf("Relatório\n");
    for(i = 0; i < LIN; i++){
        total_produtos = 0;

        for(j = 0; j < COL; j++){
            total_produtos += valores[i][j];
        }

        total_geral += total_produtos;
        printf("%s: %d unidades.\n", produtos[i], total_produtos);
    }
    printf("Total geral: %d unidades.\n", total_geral);

    return 0;
}
