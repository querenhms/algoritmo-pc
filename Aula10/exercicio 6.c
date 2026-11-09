#include <stdio.h>
#include <locale.h>

typedef struct
{
    int rgm;
    float nota1;
    float nota2;
    float media;
} Aluno; //estrutura

void calcular_media(Aluno *aluno)
{
    aluno->media = (aluno->nota1 + aluno->nota2) / 2;
}

int main()
{
    setlocale(LC_CTYPE, "");

    Aluno alunos[3];
    int i, rgm_consulta;
    int encontrado = 0;

    for (i = 0; i < 3; i++){
        printf("Aluno %d\n", i + 1);

        printf("Digite o RGM: ");
        scanf("%d", &alunos[i].rgm);
        printf("Digite a 1° nota: ");
        scanf("%f", &alunos[i].nota1);
        printf("Digite a 2° nota: ");
        scanf("%f", &alunos[i].nota2);

        calcular_media(&alunos[i]);
    }

    printf("\nDigite o RGM para consulta: ");
    scanf("%d", &rgm_consulta);

    for (i = 0; i < 3; i++){
        if (alunos[i].rgm == rgm_consulta)
            printf("\nRGM: %d\n", alunos[i].rgm);
            printf("Media: %.2f\n", alunos[i].media);

            encontrado = 1;
            break;
    }

        if (encontrado == 0)
        printf("\nRGM nao encontrado.\n");

    return 0;
}
