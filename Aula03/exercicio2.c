#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_CTYPE, "");

	int hora, minutos, total;

	printf("Hora? ");
	scanf("%d", &hora);

	printf("Minutos? ");
	scanf("%d", &minutos);

	total = (hora * 60) + minutos;

	printf("Já se passaram %d minutos desde o início do dia\n", total);
	return 0;
}
