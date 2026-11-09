#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_CTYPE, "");

	float qte_total, qte_manha, qte_tarde;

	printf("Quantidade recebida pela manhã? ");
	scanf("%f", &qte_manha);

	printf("Quantidade recebida à tarde? ");
	scanf("%f", &qte_tarde);

	qte_total = qte_manha + qte_tarde;

	printf("Total de produtos recebidos no dia: %.2f",  qte_total);
	return 0;
}
