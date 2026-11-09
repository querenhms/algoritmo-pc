/*
/   Nome: Brenda Raissa Silva Pereira
    RGM: 47281774
    Nome: Quéren-Hapuque Morais dos Santos
    RGM: 48135313
*/

#include <stdio.h>

int main()
{
    int codigo_cadete, etapa, pontuacao, pontuacao_total, continuar;
    float media;

    do
    {
        pontuacao_total = 0;

        printf("\n========================================\n");
        printf("          MISSAO ORBITAL\n");
        printf("       SIMULADOR DE TREINAMENTO\n");
        printf("========================================\n");

        printf("\nDigite o codigo do cadete: ");
        scanf("%d", &codigo_cadete);

        for (etapa = 1; etapa <= 3; etapa++)
        {
            printf("\nEtapa %d de 3\n", etapa);
            printf("Digite a pontuacao (0 a 100): ");
            scanf("%d", &pontuacao);

            while (pontuacao < 0 || pontuacao > 100)
            {
                printf("Pontuacao invalida!\n");
                printf("Digite novamente uma pontuacao entre 0 e 100: ");
                scanf("%d", &pontuacao);
            }

            pontuacao_total += pontuacao;
        }

        media = pontuacao_total / 3.0;

        printf("\n========================================\n");
        printf("       RESULTADO DO TREINAMENTO\n");
        printf("========================================\n");

        printf("Codigo do cadete: %d\n", codigo_cadete);
        printf("Pontuacao total: %d\n", pontuacao_total);
        printf("Media: %.2f\n", media);

        if (media >= 85)
        {
            printf("Classificacao: Comandante da missao\n");
            printf("Treinamento concluido com excelencia.\n");
        }
        else if (media >= 70)
        {
            printf("Classificacao: Piloto aprovado\n");
            printf("Cadete autorizado para a missao.\n");
        }
        else if (media >= 50)
        {
            printf("Classificacao: Cadete em recuperacao\n");
            printf("Novo treinamento recomendado.\n");
        }
        else
        {
            printf("Classificacao: Treinamento reiniciado\n");
            printf("Cadete ainda nao autorizado.\n");
        }

        if (pontuacao_total == 300)
        {
            printf("PONTUACAO MAXIMA!\n");
        }

        printf("\nDeseja avaliar outro cadete?\n");
        printf("1 - Sim\n");
        printf("0 - Nao\n");
        printf("Digite sua opcao: ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    printf("\nTreinamento encerrado. Boa missao!\n");

    return 0;
}