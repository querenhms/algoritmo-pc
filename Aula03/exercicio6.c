#include <stdio.h>
#include <locale.h>
#include <math.h>
int main ()
{
	setlocale(LC_CTYPE, "");
	float largura, comprimento, valor_caixa, area, total;
	int qte_caixas;

	printf("Qual é a largura da área (em metros)?  ");
	scanf("%f", &largura);

	printf("Qual é o comprimento da área (em metros)?  ");
	scanf("%f", &comprimento);

	printf("Qual é o valor de cada caixa?  ");
	scanf("%f", &valor_caixa);

    area = largura * comprimento;
    qte_caixas = ceil(area / 2.5); //função 'ceil' arredonda para cima
    total = qte_caixas * valor_caixa;

    printf("Área total a ser revestida: %.2f m²\n", area);
    printf("Quantidade de caixas necessárias:  %d\n", qte_caixas);
    printf("Custo total da compra: R$ %.2f  ", total);

	return 0;
}
