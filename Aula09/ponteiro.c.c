#include<stdio.h>

int main ()
{


    int idade = 10;
    int *p;

    p = &idade;

    printf("%d\n", idade);
    printf("%p\n", &idade);
    printf("%p\n", p);
    printf("%d\n", *p);

    return 0;
}
