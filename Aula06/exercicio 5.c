#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int conta, senha;
    int tentativas = 0;
    int autenticado = 0;

    do {
        printf("\nDigite o número da conta: ");
        scanf("%d", &conta);

        printf("Digite a senha: ");
        scanf("%d", &senha);

        tentativas++;

        if (conta == 12345 && senha == 123) {
            autenticado = 1;
            printf("\nAcesso autorizado!\n");
        } else {
            printf("\nConta ou senha incorreta!\n");
        }

    } while (autenticado == 0 && tentativas < 3);

    if (autenticado == 0) {
        printf("\nAcesso bloqueado! Você excedeu o limite de tentativas.\n");
    }

    return 0;
}
