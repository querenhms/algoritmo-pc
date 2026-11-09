#include <stdio.h>
#include <locale.h>

int main()
{
    FILE *arquivo; //ponteiro para o arquivo
    setlocale(LC_CTYPE, "");
    int i, num;

    arquivo = fopen("tabuada.txt", "a"); //abre e cria o arquivo
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    fprintf(arquivo, "Tabuada do %d\n", num); //aqui tem mais um f

    for(i = 0; i < 11; i++) {
        fprintf(arquivo, "%d * %d = %d\n", num, i, (num * i));
    }
    printf("Arquivo criado com sucesso!\n");
    fclose(arquivo);

    return 0;
}
