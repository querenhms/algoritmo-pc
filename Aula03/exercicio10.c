#include <stdio.h>
#include <locale.h>
#include<math.h>
#define PI 3.14159
#define GRAVIDADE 9.8 //declarar no início
int main ()
{
	setlocale(LC_CTYPE, "");
	float veloc_inicial, angulo, alcance, radianos;

	printf("Qual a velocidade inicial (m/s): ");
	scanf("%f", &veloc_inicial);

	printf("Qual o ângulo de lançamento em graus: ");
	scanf("%f", &angulo);

	radianos = (angulo * PI) / 180;

	alcance = pow(veloc_inicial, 2) * sin(2 * radianos) / GRAVIDADE; // trocar 'sin(2*angulo) por radianos

	printf("O alcance horizontal estimado é %.2f metros", alcance);

	return 0;
}
