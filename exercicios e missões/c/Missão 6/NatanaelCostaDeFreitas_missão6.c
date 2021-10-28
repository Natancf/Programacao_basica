#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    int menu, voltarmenu, par_impar;
    float peso, altura, imc, num1, num2, produto, quociente;

    menu = 0;
    voltarmenu = 1;

    while (menu != 6) {
        system("clear||cls");//limpar tela
        printf("+-----------------------------------+\n");
        printf("|               Menu:               |\n");
        printf("+-----------------------------------+\n");
        printf("| 01 - Informacoes                  |\n");
        printf("| 02 - Calcular IMC                 |\n");
        printf("| 03 - Par ou Impar                 |\n");
        printf("| 04 - Multiplicacao                |\n");
        printf("| 05 - Divisao                      |\n");
        printf("| 06 - Sair                         |\n");
        printf("+-----------------------------------+\n");

        
        scanf("%i", &menu); // Lê a opção que o usuário deseja
        switch (menu) {
            case 1://exibe informações sobre o desenvolvedor
                while (voltarmenu != 0) {   
                    system("clear||cls");
                    printf("+-----------------------------------+\n");
                    printf("|            informacoes            |\n");
                    printf("+-----------------------------------+\n");
                    printf("| Nome: Natanael Costa de Freitas   |\n");
                    printf("| Matricula: 202017728              |\n");
                    printf("| Semestre: primeiro semestre       |\n");
                    printf("+-----------------------------------+\n");

                    printf("| 0 - voltar                        |\n");
                    printf("+-----------------------------------+\n");
                    scanf("%i", &voltarmenu); // voltar para o menu
                }
                break;
            case 2: //realiza o calculo do imc com as informacoes digitadas
                while (voltarmenu != 0) {
                    system("clear||cls");
                    printf("+-----------------------------------+\n");
                    printf("|            Calcular IMC           |\n");
                    printf("+-----------------------------------+\n");
                    printf("| Digite seu peso: ");
                    scanf("%f", &peso);
                    printf("| Digite sua altura: ");
                    scanf("%f", &altura);
                    imc = peso / (altura * altura);

                    printf("| Seu IMC e: %.2f                   |\n",imc);
                    printf("+-----------------------------------+\n");

                    printf("| 0 - voltar                        |\n");
                    printf("+-----------------------------------+\n");
                    scanf("%i", &voltarmenu); // voltar para o menu
                }
                break;
            case 3://verifica se o numero e par ou impar
                while (voltarmenu != 0) {
                    system("clear||cls");
                    printf("+-----------------------------------+\n");
                    printf("|            Par ou Impar           |\n");
                    printf("+-----------------------------------+\n");
                    printf("| Digite um numero ");
                    scanf("%d", &par_impar);
                    if (par_impar % 2 == 0) {
                        printf("| o numero %d eh par\n",par_impar);
                    }else {
                        printf("| o numero %d eh impar\n",par_impar);
                    }
                    
                    printf("+-----------------------------------+\n");

                    printf("| 0 - voltar                        |\n");
                    printf("+-----------------------------------+\n");
                    scanf("%i", &voltarmenu); // voltar para o menu
                }
                break;
            case 4://realiza a multiplicacao de dois numeros
                while (voltarmenu != 0) {
                    system("clear||cls");
                    printf("+-----------------------------------+\n");
                    printf("|            Multiplicacao          |\n");
                    printf("+-----------------------------------+\n");
                    printf("| Digite um numero: ");
                    scanf("%f", &num1);
                    printf("| Digite outro numero: ");
                    scanf("%f", &num2);
                    produto = num1 * num2;

                    printf("| %.2f x %.2f = %.2f                   |\n", num1, num2, produto);
                    printf("+-----------------------------------+\n");

                    printf("| 0 - voltar                        |\n");
                    printf("+-----------------------------------+\n");
                    scanf("%i", &voltarmenu); // voltar para o menu
                }
                break;
            case 5://realiza a divisao de dois numeros
                while (voltarmenu != 0) {
                    system("clear||cls");
                    printf("+-----------------------------------+\n");
                    printf("|            Divisao                |\n");
                    printf("+-----------------------------------+\n");
                    printf("| Digite um numero: ");
                    scanf("%f", &num1);
                    if (num1 == 0) { //para não ser possivel digitar zero
                        while (num1 == 0) {
                            printf("| Numero invalido! Digite outro numero!\n");
                            printf("| Digite um numero: ");
                            scanf("%f", &num1);
                        }
                    }
                    printf("| Digite outro numero: ");
                    scanf("%f", &num2);
                    if (num2 == 0) { //para que nao seja possivel o usuario digitar zero
                        while (num2 == 0) {
                            printf("| Numero invalido! Digite outro numero!\n");
                            printf("| Digite um numero: ");
                            scanf("%f", &num2);
                        }
                    }
                    quociente = num1 / num2;

                    printf("| %.2f / %.2f = %.2f\n", num1, num2, quociente);
                    printf("+-----------------------------------+\n");

                    printf("| 0 - voltar                        |\n");
                    printf("+-----------------------------------+\n");
                    scanf("%i", &voltarmenu); // voltar para o menu
                }
                break;
            case 6:
                printf("Ate a proxima \n");
        }
        if (voltarmenu == 0) { //para que a condição no laço voltarmenu continue verdade
			voltarmenu = 1;
        }
    }
    
    return 0;
}
