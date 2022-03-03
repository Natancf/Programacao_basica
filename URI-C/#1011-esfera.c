#include <stdio.h>
#include <stdlib.h>

int main(){
    double pi = 3.14159, raio, raio_cubo, volume;

    scanf("%lf", &raio);
    raio_cubo = (raio * raio * raio);
    volume = (4/3.0) * pi * raio_cubo;
    
    printf("VOLUME = %.3f\n", volume);

    return 0;
}