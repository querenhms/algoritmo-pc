#include <stdio.h>
#include <locale.h>

void dobro(int *numero){
    *numero = *numero * 2; // modifica a variável original
}

int main()
{
    setlocale(LC_CTYPE, "");

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    dobro(&numero);

    printf("O dobro do número digitado é: %d\n", numero);

    return 0;
}
