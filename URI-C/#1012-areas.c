#include <stdio.h>
#include <stdlib.h>

int main(){
    double A, B, C, tri_ret, circ, trapz, quad, ret, pi = 3.14159;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    tri_ret = (A * C)/2;
    circ = pi * (C*C);
    trapz = ((A + B)*C)/2;
    quad = B * B;
    ret = A * B;

    printf("TRIANGULO: %.3f\n", tri_ret);
    printf("CIRCULO: %.3f\n", circ);
    printf("TRAPEZIO: %.3f\n", trapz);
    printf("QUADRADO: %.3f\n", quad);
    printf("RETANGULO: %.3f\n", ret);

    return 0;
}