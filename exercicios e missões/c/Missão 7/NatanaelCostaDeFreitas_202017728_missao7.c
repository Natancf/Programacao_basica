#include <stdio.h>
#include <stdlib.h>


int main() {

    int numeros, total = 0, negativos = 0, pares = 0, i = 2, contador = 0, primos = 0, soma = 0, menu, voltarmenu;
    float verificaprimo = 1, media = 0;

    do {
        scanf("%d", &numeros);
        if (numeros % 150 != 0){
            total++;//quantidade total de números cadastrados
            soma = soma + numeros;//soma de todos os números
            media = soma / total;//cálculo da média
        }
        if (numeros < 0 && numeros % 150 != 0) {//quantidade de números negativos
            negativos++;
        }
        if (numeros % 2 == 0 && numeros % 150 != 0) {//quantidade de números pares
            pares++;
        }

        if(numeros > 1){//quantidade de números primos
            while (i < numeros){
                verificaprimo = numeros % i;
                i++;
                if (verificaprimo == 0) {
                    contador = contador +1;
                }
            }
                
            if (contador == 0) {
                primos++;
            }
        }
            
    } while (numeros % 150 != 0);//laço menu

    do {
        system("clear||cls");//limpar tela
        printf("+----------------------------------------+\n");
        printf("|                  Menu:                 |\n");
        printf("+----------------------------------------+\n");
        printf("| 01 - Quantidade de numeros inseridos   |\n");
        printf("| 02 - Quantidade de numeros negativos   |\n");
        printf("| 03 - Quantidade de numeros pares       |\n");
        printf("| 04 - Quantidade de numeros primos      |\n");
        printf("| 05 - Media dos numeros                 |\n");
        printf("| 06 - Sair                              |\n");
        printf("+----------------------------------------+\n");

        
        scanf("%i", &menu); // Lê a opção que o usuário deseja entrar no menu
        switch (menu) {
            case 1://exibe quantidade de numeros inseridos
                do {   
                    system("clear||cls");
                    printf("+----------------------------------------+\n");
                    printf("| 01 - Quantidade de numeros inseridos   |\n");
                    printf("+----------------------------------------+\n");
                    printf("| Voce digitou %d numero(s)\n", total);
                    printf("+----------------------------------------+\n");

                    printf("| 0 - voltar                             |\n");
                    printf("+----------------------------------------+\n");
                    scanf("%d", &voltarmenu); // voltar para o menu
                } while (voltarmenu != 0);
                break;
            case 2: //exibe quantidade de numeros negativos
                do {   
                    system("clear||cls");
                    printf("+----------------------------------------+\n");
                    printf("| 02 - Quantidade de numeros negativos   |\n");
                    printf("+----------------------------------------+\n");
                    printf("| Voce digitou %d numero(s) negativo(s)\n", negativos);
                    printf("+----------------------------------------+\n");

                    printf("| 0 - voltar                             |\n");
                    printf("+----------------------------------------+\n");
                    scanf("%d", &voltarmenu); // voltar para o menu
                } while (voltarmenu != 0);
                break;
            case 3://exibe quantidade de numeros pares
                do {   
                    system("clear||cls");
                    printf("+----------------------------------------+\n");
                    printf("| 03 - Quantidade de numeros pares       |\n");
                    printf("+----------------------------------------+\n");
                    printf("| Voce digitou %d numero(s) par(es)\n", pares);
                    printf("+----------------------------------------+\n");

                    printf("| 0 - voltar                             |\n");
                    printf("+----------------------------------------+\n");
                    scanf("%d", &voltarmenu); // voltar para o menu
                } while (voltarmenu != 0);
                break;
            case 4://exibe quantidade de numeros primos
                do {   
                    system("clear||cls");
                    printf("+----------------------------------------+\n");
                    printf("| 04 - Quantidade de numeros primos      |\n");
                    printf("+----------------------------------------+\n");
                    printf("| Voce digitou %d numero(s) primo(s) \n", primos);
                    printf("+----------------------------------------+\n");

                    printf("| 0 - voltar                             |\n");
                    printf("+----------------------------------------+\n");
                    scanf("%d", &voltarmenu); // voltar para o menu
                } while (voltarmenu != 0);
                break;
            case 5://exibe media dos numeros inseridos
                do {   
                    system("clear||cls");
                    printf("+----------------------------------------+\n");
                    printf("| 05 - Media dos numeros                 |\n");
                    printf("+----------------------------------------+\n");
                    printf("| A media do(s) numero(s) digitado(s) e %.2f\n", media);
                    printf("+----------------------------------------+\n");

                    printf("| 0 - voltar                             |\n");
                    printf("+----------------------------------------+\n");
                    scanf("%d", &voltarmenu); // voltar para o menu
                } while (voltarmenu != 0);
                break;
            case 6://sai do programa
                printf("Ate a proxima \n");
        }
        if (voltarmenu == 0) { //para que a condição no laço voltarmenu continue verdadeira
			voltarmenu = 1;
        }
    } while (menu != 6);
    

    system("pause");
    return 0;
}