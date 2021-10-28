#include <stdio.h>
#include <stdlib.h>

#define LINHAS 3
#define COLUNAS 3

int cadastra_aluno(int id, int id_aluno[LINHAS][COLUNAS]);//cadastra os id dos alunos

int main (void){

    int id_aluno[LINHAS][COLUNAS] = {0}, id=0, i=0, j=0, menu=0, voltarmenu=0;

    
    do
    {
        system("clear||cls"); //limpar tela
        printf("+------------------------------------------+\n");
        printf("|                  Menu:                   |\n");
        printf("+------------------------------------------+\n");
        printf("| 01 - Cadastrar aluno                     |\n");
        printf("| 02 - Ver Turma                           |\n");
        printf("| 03 - Sair                                |\n");
        printf("+------------------------------------------+\n");

        scanf("%i", &menu); // Lê a opção que o usuário deseja entrar no menu
        switch (menu)
        {
        case 1: //Cadastrar id de um aluno  
            do
            {
                system("clear||cls");
                printf("+--------------------------------------------+\n");
                printf("| Cadastrar aluno                            |\n");
                printf("+--------------------------------------------+\n");
                printf("+--------------------------------------------+\n");
                cadastra_aluno(id, id_aluno);
                printf("| 0 - voltar                                 |\n");
                printf("+--------------------------------------------+\n");
                scanf("%d", &voltarmenu); // voltar para o menu
            } while (voltarmenu != 0);
            break;
        case 2: //lista matriz de ids
            do
            {
                system("clear||cls");
                printf("+----------------------------------------+\n");
                printf("| Ver Turma                              |\n");
                printf("+----------------------------------------+\n");
                printf("+----------------------------------------+\n");
                for (i = 0; i < LINHAS; i++)
                {
                    printf("| ");
                    for (j = 0; j < COLUNAS; j++)
                    {
                        if (id_aluno[i][j] == 0)
                        {
                            id_aluno[i][j] = -1;
                            printf("%d ",id_aluno[i][j]);
                        }else{
                            printf("%d ",id_aluno[i][j]);
                        }
                    }
                    printf("\n");
                }
                printf("| 0 - voltar                             |\n");
                printf("+----------------------------------------+\n");
                scanf("%d", &voltarmenu); // voltar para o menu
            } while (voltarmenu != 0);
            break;
        case 3://sair
            printf("| Tchau, ate a proxima                     |\n");
            printf("+------------------------------------------+\n");
            break;
        default:
            printf("| Escolha uma opcao valida\n");
            system("pause");
        }
        if (voltarmenu == 0)
        { //para que a condição no laço voltarmenu continue verdadeira
        voltarmenu = 1;
        }
    }while (menu != 3);

    return 0;
}

int cadastra_aluno(int id, int id_aluno[LINHAS][COLUNAS])
{ //cadastra os id dos alunos
    int linhas=0, colunas=0;

    printf("| Em qual linha voce quer adicionar o id?\n| linhas validas de 1 a 3\n");
    scanf("%d", &linhas);
    if (linhas > 3 || linhas <= 0)
    {
        while (linhas > 3 || linhas <= 0)
        {
            printf("| Digite uma linha valida\n");
            linhas = 0;
            scanf("%d", &linhas);
        }
    }
    system("clear||cls");
    printf("| Em qual coluna voce quer adicionar o id?\n| colunas validas de 1 a 3\n");
    scanf("%d", &colunas);
    if (colunas > 3 || colunas <= 0)
    {
        while (colunas > 3 || colunas <= 0)
        {
            printf("| Digite uma coluna valida\n");
            colunas = 0;
            scanf("%d", &colunas);
        }
    }
    system("clear||cls");
    printf("| Digite o id\n| numeros validos de 1 a 99\n");
    scanf("%d", &id);
    if (id >= 100 || id <= 0)
    {
        while (id >= 100 || id <= 0)
        {
            printf("| Digite um id valido\n");
            id = 0;
            scanf("%d", &id);
        }
    }
    
    id_aluno[linhas-1][colunas-1] = id;

    return id_aluno[linhas-1][colunas-1] ;
}