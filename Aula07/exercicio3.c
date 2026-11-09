#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    int i = 1, aprovados = 0;
    float nota;

    while (i <= 10) {
        printf("Digite a nota do %dº aluno: ", i);
        scanf("%f", &nota);

        if (nota >= 6.0) {
            aprovados += 1;
        }

        i++;
    }

    printf("\nQuantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}