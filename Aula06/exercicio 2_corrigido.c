#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float nota, soma = 0, media;
    float maior_nota = 0;
    int i;

    for (i = 0; i < 5; i++) {
        do {
            printf("Digite a %d° nota do aluno (0-10): ", i + 1);
            scanf("%f", &nota);

            if (nota < 0 || nota > 10) {
                printf("Nota inválida!!! Tente outra vez!!\n");
            } else {
                soma += nota;

                if (nota > maior_nota) {
                    maior_nota = nota;
                }
            }

        } while (nota < 0 || nota > 10);
    }

    media = soma / 5;

    printf("\nMédia da turma: %.2f", media);
    printf("\nMaior nota: %.2f", maior_nota);

    return 0;
}
