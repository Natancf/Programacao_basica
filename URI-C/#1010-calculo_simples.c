#include <stdio.h>
#include <stdlib.h>

int main(){
    int id_item1, quant_item1, id_item2, quant_item2;
    double preco_und1, preco_und2, preco_total;

    scanf("%d %d %lf", &id_item1, &quant_item1, &preco_und1);
    scanf("%d %d %lf", &id_item2, &quant_item2, &preco_und2);
    preco_total = (quant_item1 * preco_und1) + (quant_item2 * preco_und2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", preco_total);

    return 0;
}