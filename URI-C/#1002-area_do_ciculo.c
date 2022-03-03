#include <stdio.h>
#include <stdlib.h>

int main(){
    double pi=3.14159, raio, area;

    scanf("%lf", &raio);
    area = pi * (raio * raio);

    printf("A=%.4f\n", area);
    
    return 0;
}