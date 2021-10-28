#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b;
    scanf("%d %d", &a, &b);
    double media;
    media = (a + b) / 2;
    printf("A média de %d e %d é %f\n", a, b, media);
    
    system("pause");
    return 0;
}