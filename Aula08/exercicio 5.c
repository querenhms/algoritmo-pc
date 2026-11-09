#include <stdio.h>
#include <locale.h>
#define LIN 3
#define COL 4

int main()
{
    setlocale(LC_CTYPE, "");
    int i, j, notas[LIN][COL];
    float soma, media, maior_media;
    int est_maior;

    for(i = 0; i < LIN; i++){
            for(j = 0; j < COL; j++){
                    printf("Digite a %dª nota do %d° estudante: ", j + 1, i + 1);
                    scanf("%d", &notas[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < LIN; i++){
            soma = 0;
            for(j = 0; j < COL; j++){
                    soma += notas[i][j];
            }

            media = soma / (float)COL;
            printf("Média do estudante %d: %.2f\n", (i + 1), media);
            if(i == 0){
            maior_media = media;
            est_maior = i + 1;
            }

            if(media > maior_media){
            maior_media = media;
            est_maior = i + 1;
            }
    }
    printf("Maior média:\nEstudante %d - média: %.2f\n", (est_maior+1), maior_media);

    return 0;
}
