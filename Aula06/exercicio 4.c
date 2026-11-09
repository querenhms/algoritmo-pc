#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int qtd_alunos, i;
    float nota, soma = 0, media;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtd_alunos);

    for (i = 0; i < qtd_alunos; i++) {

        do {
            printf("\nDigite a nota do %d° aluno (0 a 10): ", i + 1);
            scanf("%f", &nota);

            if (nota < 0 || nota > 10) {
                printf("Nota inválida! Digite uma nota entre 0 e 10.\n");
            }

        } while (nota < 0 || nota > 10);

        soma += nota;
    }

    media = soma / qtd_alunos;

    printf("\nMédia da turma: %.2f\n", media);

    return 0;
}
