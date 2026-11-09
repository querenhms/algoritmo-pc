#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int cpf;
    float preco=1, total= 0;

    printf("Digite o cpf:");
    scanf("%d", &cpf);

    while(preco>0){
        printf("Digite o preço do produto (zero para encerrar): ");
        scanf("%f", &preco);

         total += preco;
    }
    /* for (int i=0; preco >0; i++)*/

    printf("\nCPF do Cliente: %d", cpf);
    printf("\nValor total da compra: R$ %.2f", total);

    return 0;
}
