#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_CTYPE, "");

    float peso, agua;
    printf("Digite a massa corporal do paciente (em kg): ");
    scanf("%f", &peso);
    agua = (peso * 35.0) / 1000.0;
    printf("Recomendação diária de água: %.2f", agua);
    return 0;
}