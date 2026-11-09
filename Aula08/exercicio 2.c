#include <stdio.h>
#include <locale.h>
#define VAL 8

int main()
{
    setlocale(LC_CTYPE, "");
    int i, contador;
    float valores[VAL];
    float soma = 0, media, acima_med;

    for(i = 0; i < VAL; i++){
            printf("Digite o %d° valor: ", (i + 1));
            scanf("%f", &valores[i]);
            soma += valores[i];
    }

            media = soma / VAL;
            acima_med = 1;
            for(i = 0; i < VAL; i++){
                    if(valores[i] > media)
                            contador++;
                    if(valores[i] > acima_med){
                        acima_med = valores[i];
        }
    }

    printf("Média: %.2f\n", media);
    printf("Valores acima da média: %d\n", contador);

 return 0;
}
