#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double x1, y1, x2, y2, subx, suby, potx, poty, soma, raiz;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    subx = x2 - x1;
    suby = y2 - y1;
    potx = pow(subx,2);
    poty = pow(suby,2);
    soma = potx + poty;

    raiz = sqrt(soma);
    
    printf("%.4f\n", raiz);
    
    return 0;
}