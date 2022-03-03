#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int X;
    double Y, consumo_medio;

    scanf("%d", &X);
    scanf("%lf", &Y);
    
    consumo_medio = X / Y;

    printf("%.3f km/l", consumo_medio);
    
    return 0;
}