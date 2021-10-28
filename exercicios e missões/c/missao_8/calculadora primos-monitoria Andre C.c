#include <stdio.h>
#include <stdlib.h>
int main(){
    int qnt_div, qnt_primos, i, k;

    qnt_div=0;
    qnt_primos=0;
    printf("sou uma calculadora de numeros primos, acho os numeros de 2 a 1000\n");
    printf("tecle enter para continuar\n");
    setbuf(stdin, NULL);//limpa buff de teclado
    //char j;
    //scanf("%c", &j); IGUAL O GETCHAR()
    getchar();
    for(k=2;k<=1000;k++){ //acha os primos de 2 a 1000
        qnt_div=0;
        for(i=2; i<=(k/2); i++){
            if(k%i==0){
                //printf("o numero e divisivel por %d\n", i); caso queira saber quais os divisores
                qnt_div++;
                break;
            }
        }

        if(qnt_div==0){
            printf("o numero %d primo!\n", k);
            qnt_primos++;

        }
    }
    printf("foram encontrados %d primos!", qnt_primos);
    return 0;
}
