#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");

    char nome[50], cargo[50];
    int qte_depen;

    printf("Nome do funcionário? ");
    scanf("%s", &nome);

    printf("Qauntidade de dependentes? ");
    scanf("%d", &qte_depen);

    printf("Cargo? ");
    scanf("%s", &cargo);

    printf("=== Dados Cadastrados ===\n Nome: \n Dependentes \n Cargo \n", nome, qte_depen, cargo);
    return 0;
}
