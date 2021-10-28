#include <stdio.h>
#include <stdlib.h>

int main(){
    int X,i,f;

    scanf("%d", &X);
    f=1;
    for (i = 1; i <= X; i++){
        f*= i;
    }
    printf("%d",f);

    return 0;
}