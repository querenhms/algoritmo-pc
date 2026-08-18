#include<stdio.h>
#include<locale.h>

int main()
{
        setlocale(LC_CTYPE, ""); //acentuação

        int rgm = 123456;
        float media = 4.567788;
        printf("Dados do Aluno:\n");
        printf("RGM: %d\n", rgm);
        printf("Média: %.2f", media);
        return 0;
}
