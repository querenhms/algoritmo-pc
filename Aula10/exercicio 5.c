#include <stdio.h>
#include <locale.h>

typedef struct
{
    int rgm;
    float nota1;
    float nota2;
    float media;
}Aluno; //atributo

void calcular_media(Aluno *aluno)
{
    aluno->media = (aluno->nota1 + aluno->nota2) / 2; //ponteiro  por isso da ->
}

int main()
{
    setlocale(LC_CTYPE, "");

    Aluno aluno1;
    printf("Digite o RGM do aluno: ");
    scanf("%d", &aluno1.rgm);

    printf("Digite a 1° nota: ");
    scanf("%f", &aluno1.nota1);

    printf("Digite a 2° nota: ");
    scanf("%f", &aluno1.nota2);

    calcular_media(&aluno1);

    printf("/nRGM do aluno: %d\n", aluno1.rgm);
    printf("Media do aluno: %.2f\n", aluno1.media);
    return 0;
}
