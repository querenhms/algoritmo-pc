#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_CTYPE, "");
    int a = 7;
    int b = 2;

    printf("%.1f",(float)  a/b);

    return 0;
}
