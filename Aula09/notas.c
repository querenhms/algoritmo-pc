#include <stdio.h>
#include <locale.h>

int main()
{
    FILE *arquivo;
    setlocale(LC_CTYPE, "");

    int i, num;
    float nota;
    char rgm [9];

    arquivo = fopen("notas.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    printf("Dia a quantidade de alunos: ");
    scanf("%d", &num);

    for(i = 0; i <num; i++) {
            printf("Digite o rgm do aluno: ");
            scanf("%8s", rgm);
            printf("Qual a nota do aluno: ", nota);
            scanf("%f", &nota);
            fprintf(arquivo, "%s %2.f\n", rgm, nota);
    }

    printf("Arquivo criado com sucesso!\n");
    fclose(arquivo);

    return 0;
}
