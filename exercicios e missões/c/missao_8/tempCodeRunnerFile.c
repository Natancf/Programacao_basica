#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
        int contador = 0, X = 0, primo = 0, i;

        scanf("%d", &X);

        for (i = 1; i <= X; i++){
                if (X % i == 0)
                        contador++;
        }
        if (contador == 2){
                primo = 0;
                printf("%d",primo);
        }else{
                primo = 1;
                printf("%d",primo);
        }
        return 0;
}

/*int verificaPrimo(int numeros);

int main() {

        /*int numeros=2;
        int primos;

        
        primos = verificaPrimo(numeros);
        while (primos == 0)
        {
                if(primos == 0){
                        scanf("%d", &numeros); 
                }else{
                        printf("numeros eh %d",numeros);
                }
        }*/
/*int i = 2, contador = 0, primos = 0, numeros = 0;
        float verificaprimo = 1;

        
        scanf("%d", &numeros); 
        
        for(int i=0; i<=numeros;i++){
                if (numeros % i == 0)
                        contador++;
        }*/
/*if(numeros > 1){//quantidade de números primos
                while (i < numeros){
                verificaprimo = numeros % i;
                i++;
                if (verificaprimo == 0) {
                        contador = contador +1;
                }
                }
                
                if (contador == 0) {
                        primos = 0;
                        numeros = 0;
                        while (numeros == 0)
                        {
                                scanf("%d", &numeros); 
                        }
                }else {
                        primos = 1;
                        numeros = numeros;
                        printf("%d",numeros);
                }
        }*/

/*return 0;    
}*/

/*int verificaPrimo(int numeros){

        int i = 2, contador = 0, primos = 0;
        float verificaprimo = 1;
        if(numeros > 1){//quantidade de números primos
                while (i < numeros){
                verificaprimo = numeros % i;
                i++;
                if (verificaprimo == 0) {
                        contador = contador +1;
                }
                }
                
                if (contador == 0) {
                        primos = 0;
                }else {
                        primos = 1;
                }
        }
        return primos;
}*/
