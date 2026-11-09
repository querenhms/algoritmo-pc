#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int codigo, quantidade = 0;
    float valor, total = 0, maior_venda = 0;
    FILE *arquivo = fopen("vendas.txt", "r");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while(fscanf(arquivo, "%d %f", &codigo, &valor) !=EOF){
                quantidade++;
                total += valor;
                if(valor > maior_venda)
                    maior_venda = valor;
    }

    printf("Quantidade de vendas: %d\n", quantidade);
    printf("Total vendido: R$ %.2f\n", total);
    printf("Maior venda: R$ %.2f\n", maior_venda);

    fclose(arquivo);

    return 0;
}
