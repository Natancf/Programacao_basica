#include <stdio.h>
#include <stdlib.h>

int main(){
    double quantidade_litros, tempo_gasto, velocidade_media;

    scanf("%lf", &tempo_gasto);
    scanf("%lf", &velocidade_media);

    quantidade_litros = (tempo_gasto * velocidade_media)/12;
    
    printf("%.3f\n", quantidade_litros);
    
    return 0;
}
//computação na borda
//inteligência artificial na borda