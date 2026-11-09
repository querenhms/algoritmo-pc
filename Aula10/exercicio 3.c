#include <stdio.h>
#include <locale.h>

float calcular_media(float nota1, float nota2)
{
    return (nota1 + nota2) / 2;
}

void exibir_resultado(float media)
{
    printf("Média do aluno: %.1f\n", media);

    if (media >= 7)
        printf("Situação: Aprovado\n");
    else
        printf("Situação: Reprovado\n");
}

int main()
{
    setlocale(LC_CTYPE, "");

    float nota1, nota2, media;
    char continuar;

    do
    {
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = calcular_media(nota1, nota2);

        exibir_resultado(media);

        printf("Deseja digitar notas de outro aluno (s/n)? ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
