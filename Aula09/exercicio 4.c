#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    char rgm[20];
    float nota, media_turma, maior_nota = 0, soma = 0;
    int qnt_estudantes = 0, aprovados = 0;

    FILE *arquivo = fopen("notas.txt", "r");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while(fscanf(arquivo, "%19s %f", rgm, &nota) !=EOF){
                soma += nota;
                qnt_estudantes++;
                if(nota > maior_nota)
                    maior_nota = nota;
                if(nota >= 6.0)
                    aprovados++;
    }

    media_turma = soma / qnt_estudantes;
    printf("Relatório\n");
    printf("Estudantes: %d\n", qnt_estudantes);
    printf("Média da turma: %.2f\n", media_turma);
    printf("Maior nota: %.2f\n", maior_nota);
    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    fclose(arquivo);

    return 0;
}
