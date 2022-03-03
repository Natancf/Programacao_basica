#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor, valor_final, cem=0, cinquenta=0, vinte=0, dez=0, cinco=0, dois=0, um=0;

    scanf("%d", &valor);
    valor_final = valor;
    if(valor >= 100){
        while (valor >= 100)
        {
            valor = valor - 100;
            cem++;
        }
    }
    if (valor >= 50)
    {
        while (valor >= 50)
        {
            valor = valor - 50;
            cinquenta++;
        }
    }
    if (valor >= 20)
    {
        while (valor >= 20)
        {
            valor = valor - 20;
            vinte++;
        }
    }
    if (valor >= 10)
    {
        while (valor >= 10)
        {
            valor = valor - 10;
            dez++;
        }
    }
    if (valor >= 5)
    {
        while (valor >= 5)
        {
            valor = valor - 5;
            cinco++;
        }
    }
    if (valor >= 2)
    {
        while (valor >= 2)
        {
            valor = valor - 2;
            dois++;
        }
    }
    if (valor >= 1)
    {
        while (valor >= 1)
        {
            valor = valor - 1;
            um++;
        }
    }
    
    printf("%d\n", valor_final);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);
    return 0;
}