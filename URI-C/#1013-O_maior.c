

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int numeros[3], maior = 0, i, j;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &numeros[i]);
    }
    
    for (j = 0; j < 3; j++)
    {
        if (numeros[j] > maior)
            maior = numeros[j];
    }

    printf("%d eh o maior\n", maior);
    return 0;
}