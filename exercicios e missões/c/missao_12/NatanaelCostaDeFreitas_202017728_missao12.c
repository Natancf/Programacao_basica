#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define typeof(var) _Generic( (var),\
int: "Integer")

//////////////////////////////////////
///////       STRUCTS         ////////
//////////////////////////////////////
typedef struct jogador //Define os jogadores
{
    int id, idade;
    char nome[50], posicao[3];
} Jogador;

typedef struct time //Define o time
{
    char nomeTime[50], nomeTecnico[50];
    Jogador jogador[5];
} Time;

typedef struct jogadoresPartidas //Definir informações sobre os jogadores na partida
{
    int id, assistencias, kills, deaths;
} JogadorPartida;

typedef struct partida //Define uma partida
{
    int total_kills_time, total_kills_adversario, total_torres_destruidas_time, total_torres_destruidas_adversario, total_assistencias, total_kills_todas_partidas, total_assistencias_todas_partidas;
    bool vitoria;
    JogadorPartida jogadores_partida[5];
} Partida;

/////////////////////////////////////////////////////
///////       ASSINATURAS DE FUNÇÕES         ////////
/////////////////////////////////////////////////////
int opcoesMenu(int menu); //Menu de opções
Time cadastrarTime(Time *time); //Função para cadadstrar time
void listarTime(Time *time); //Função para listar times
Time editarTime(Time *time, int id, int totalPontosPorJogador[]); //Função para editar informações do time
Partida cadastrarPartida(Time *time, Partida partida[], int *quantPartidas, int totalPontosPorJogador[]); //Função para cadastrar partida
int calcularPontuacao(Partida partida[], int pontuacaoJogador[], int id, int *ptrquantPartidas); //Função para calcualar a pontuação dos jogadores
void listarPartida(Partida partida[], int *ptrquantPartidas, Time *time); //Função para listar as partida
void pesquisarJogador(Time *time, int id, int totalPontosPorJogador[]); //Função para pesquisar jogadores
void totalKillsAssistencias(Partida partida[], int *ptrquantPartidas); //Função para mostrar o total de kills e assistencias
void maiorPontuacao(int totalPontosPorJogador[], Time *time, int id); //Função mostrar o jogador com maior pontuação
void menorPontuacao(int totalPontosPorJogador[], Time *time, int id); //Função mostrar o jogador com menor pontuação

//////////////////////////////////////
///////         MAIN          ////////
//////////////////////////////////////
int main(void)
{
    Time equipe;
    Time *time = &equipe;
    JogadorPartida jogadorespartida;
    JogadorPartida *jogadoresPartida = &jogadorespartida;
    Partida partida[100];
    int menu = 0, voltarmenu = 0, totalPontosPorJogador[50], id = 0, quantPartidas, totalkills, totaldeaths;
    int *ptrquantPartidas = &quantPartidas;

    do
    {
        system("clear||cls"); //limpar tela
        printf("+---------------------------------------------------+\n");
        printf("|                  Menu:                            |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 01 - Cadastrar time                               |\n");
        printf("| 02 - Listar time                                  |\n");
        printf("| 03 - Editar time                                  |\n");
        printf("| 04 - Cadastrar partida                            |\n");
        printf("| 05 - Listar partidas                              |\n");
        printf("| 06 - Pesquisar jogador                            |\n");
        printf("| 07 - Mostrar numero total de kills e assistencias |\n");
        printf("| 08 - Mostrar jogador com menor pontuacao          |\n");
        printf("| 09 - Mostrar jogador com maior pontuacao          |\n");
        printf("| 10 - Sair                                         |\n");
        printf("+---------------------------------------------------+\n");

        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            do
            {
                system("clear||cls");
                printf("+--------------------------------------------+\n");
                printf("| Cadastrar time                             |\n");
                printf("+--------------------------------------------+\n");
                cadastrarTime(time); //Chamada da função de cadastrar time
                printf("+---------------------------------------------\n");
                printf("| 0 - voltar                                  \n");
                printf("+---------------------------------------------\n");
                scanf("%d", &voltarmenu); // voltar para o menu
            } while (voltarmenu != 0);
            break;
        case 2:
            do
            {
                system("clear||cls");
                printf("+----------------------------------------+\n");
                printf("| Listar time                            |\n");
                printf("+----------------------------------------+\n");
                listarTime(time); //Chamada da função de listar time
                printf("+----------------------------------------+\n");

                printf("| 0 - voltar                             |\n");
                printf("+----------------------------------------+\n");
                scanf("%d", &voltarmenu); // voltar para o menu
            } while (voltarmenu != 0);
            break;
        case 3:
            do
            {
                system("clear||cls");
                printf("+-----------------------------------------+\n");
                printf("| Editar time                             |\n");
                printf("+-----------------------------------------+\n");
                editarTime(time, id, totalPontosPorJogador); //Chamada da função de editar informações do time
                printf("+-----------------------------------------+\n");

                printf("| 0 - voltar                              |\n");
                printf("+-----------------------------------------+\n");
                scanf("%d", &voltarmenu); // voltar para o menu
            } while (voltarmenu != 0);
            break;
        case 4:
            do
            {
                system("clear||cls");
                printf("+-------------------------------------------+\n");
                printf("| Cadastrar partida                         |\n");
                printf("+-------------------------------------------+\n");
                cadastrarPartida(time, partida, ptrquantPartidas, totalPontosPorJogador); //Função de cadastrar partidas
                printf("+-------------------------------------------+\n");

                printf("| 0 - voltar                                |\n");
                printf("+-------------------------------------------+\n");
                scanf("%d", &voltarmenu); // voltar para o menu
            } while (voltarmenu != 0);
            break;
        case 5:
            do
            {
                system("clear||cls");
                printf("+-----------------------------------------------------+\n");
                printf("| Listar partidas                                     |\n");
                printf("+-----------------------------------------------------+\n");
                listarPartida(partida, ptrquantPartidas, time); //Função para listar partidas
                printf("+-----------------------------------------------------+\n");

                printf("| 0 - voltar                                          |\n");
                printf("+-----------------------------------------------------+\n");
                scanf("%d", &voltarmenu); // voltar para o menu
            } while (voltarmenu != 0);
            break;
        case 6:
            do
            {
                system("clear||cls");
                printf("+-----------------------------------------------------+\n");
                printf("| Pesquisar jogador                                   |\n");
                printf("+-----------------------------------------------------+\n");
                pesquisarJogador(time, id, totalPontosPorJogador); //Função de pesquisar um jogador
                printf("+-----------------------------------------------------+\n");

                printf("| 0 - voltar                                          |\n");
                printf("+-----------------------------------------------------+\n");
                scanf("%d", &voltarmenu); // voltar para o menu
            } while (voltarmenu != 0);
            break;
        case 7:
            do
            {
                system("clear||cls");
                printf("+-----------------------------------------------------+\n");
                printf("| Numero total de kills e assistencias                |\n");
                printf("+-----------------------------------------------------+\n");
                totalKillsAssistencias(partida, ptrquantPartidas); //Função listar número total de kills e assistências
                printf("+-----------------------------------------------------+\n");

                printf("| 0 - voltar                                          |\n");
                printf("+-----------------------------------------------------+\n");
                scanf("%d", &voltarmenu); // voltar para o menu
            } while (voltarmenu != 0);
            break;
        case 8:
            do
            {
                system("clear||cls");
                printf("+-----------------------------------------------------+\n");
                printf("| Jogador com menor pontuacao                         |\n");
                printf("+-----------------------------------------------------+\n");
                menorPontuacao(totalPontosPorJogador, time, id); //Função mostrar jogador com menor pontuação
                printf("+-----------------------------------------------------+\n");

                printf("| 0 - voltar                                          |\n");
                printf("+-----------------------------------------------------+\n");
                scanf("%d", &voltarmenu); // voltar para o menu
            } while (voltarmenu != 0);
            break;
        case 9:
            do
            {
                system("clear||cls");
                printf("+-----------------------------------------------------+\n");
                printf("| Jogador com maior pontuacao                         |\n");
                printf("+-----------------------------------------------------+\n");
                maiorPontuacao(totalPontosPorJogador, time, id); //Função mostrar o jogador com maior pontuação
                printf("+-----------------------------------------------------+\n");

                printf("| 0 - voltar                                          |\n");
                printf("+-----------------------------------------------------+\n");
                scanf("%d", &voltarmenu); // voltar para o menu
            } while (voltarmenu != 0);
            break;
        case 10: //sai do programa
            printf("Ate a proxima \n");
        }
        if (voltarmenu == 0)
        { //para que a condição no laço voltarmenu continue verdadeira
            voltarmenu = 1;
        }
    } while (menu != 10);

    system("pause");
    return 0;
}

Time cadastrarTime(Time *time) //Função cadastrar time
{
    int quantidadeJogadores = 0;

    printf("| Digite o nome do time: ");
    scanf(" %[^\n]s", (*time).nomeTime);
    printf("| Digite o nome do tecnico: ");
    scanf(" %[^\n]s", (*time).nomeTecnico);

    do
    {
        (*time).jogador[quantidadeJogadores].id = quantidadeJogadores + 1;
        printf("| Digite o nome do jogador %d: ", quantidadeJogadores + 1);
        scanf(" %[^\n]s", (*time).jogador[quantidadeJogadores].nome);
        printf("| Digite a posicao que o jogador %d joga: (ADC, SUP, MID, TOP, JG) ", quantidadeJogadores + 1);
        scanf(" %s", (*time).jogador[quantidadeJogadores].posicao);

        while (strcmp((*time).jogador[quantidadeJogadores].posicao, "ADC") != 0 && strcmp((*time).jogador[quantidadeJogadores].posicao, "SUP") != 0 && strcmp((*time).jogador[quantidadeJogadores].posicao, "ADC") != 0 && strcmp((*time).jogador[quantidadeJogadores].posicao, "MID") != 0 && strcmp((*time).jogador[quantidadeJogadores].posicao, "TOP") != 0 && strcmp((*time).jogador[quantidadeJogadores].posicao, "JG") != 0)
        {
            printf("| Posicao invalida!\n");
            printf("| Digite a posicao que o jogador %d joga: (ADC, SUP, MID, TOP, JG)", quantidadeJogadores + 1);
            scanf(" %s", (*time).jogador[quantidadeJogadores].posicao);
        }

        printf("| Digite a idade do jogador %d: ", quantidadeJogadores + 1);
        scanf("%d", &(*time).jogador[quantidadeJogadores].idade);

        while ((*time).jogador[quantidadeJogadores].idade < 0 || (*time).jogador[quantidadeJogadores].idade > 150)
        {
            printf("| Idade invalida!\n");
            printf("| Digite a idade do jogador %d: ", quantidadeJogadores + 1);
            scanf("%d", &(*time).jogador[quantidadeJogadores].idade);
        }
        quantidadeJogadores++;
    } while (quantidadeJogadores != 5);

    return *time;
}

void listarTime(Time *time) //Função listar time
{

    printf("| Nome do time: %s\n", (*time).nomeTime);
    printf("| Nome do tecnico: %s\n", (*time).nomeTecnico);
    printf("| Jogadores: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("| %d - %s - %s\n", (*time).jogador[i].id, (*time).jogador[i].nome, (*time).jogador[i].posicao);
    }
}

Time editarTime(Time *time, int id, int totalPontosPorJogador[]) //Função editar time
{
    char verificar;
    int i = 0;

    printf("| Insira o id do jogador que voce deseja editar: ");
    scanf("%d", &i);
    printf("| Esse e o jogador que voce deseja editar? (s/n)\n");
    printf("| %d - %s - %s - %d\n", (*time).jogador[i - 1].id, (*time).jogador[i - 1].nome, (*time).jogador[i - 1].posicao, totalPontosPorJogador[i-1]);

    scanf(" %c", &verificar);

    if (verificar == 's' || verificar == 'S')
    {

        printf("| Digite o novo id: ");
        scanf(" %d", &(*time).jogador[i - 1].id);
        printf("| Digite o novo nome: ");
        scanf(" %[^\n]s", (*time).jogador[i - 1].nome);
        printf("| Digite a nova posicao: ");
        scanf(" %[^\n]s", (*time).jogador[i - 1].posicao);
    }
    else
    {
        printf("| Ok\n");
    }

    return *time;
}

Partida cadastrarPartida(Time *time, Partida partida[], int *ptrquantPartidas, int totalPontosPorJogador[]) //Função cadastrar Partida
{
    int id = 0, pontuacaoJogador[5], verificaint;
    char verificaVitoria;
    char strIdade [20];

    for (int i = 0; i < 5; i++)
    {
        printf("| Jogador %d\n", id + 1);
        printf("| Digite o numero de assistencias que o %s fez: ", (*time).jogador[id].nome);
        scanf("%d", &(partida[*ptrquantPartidas]).jogadores_partida[id].assistencias); //Recebe o número de assistências do jogador 
        printf("| Digite o numero de kills que o %s fez: ", (*time).jogador[id].nome); 
        scanf("%d", &(partida[*ptrquantPartidas]).jogadores_partida[id].kills); //Recebe o número de kills do jogador
        printf("| Digite o numero de deaths que o %s teve: ", (*time).jogador[id].nome);
        scanf("%d", &(partida[*ptrquantPartidas]).jogadores_partida[id].deaths); //Recebe o número de deaths do jogador
        

        pontuacaoJogador[id] = (partida[*ptrquantPartidas]).jogadores_partida[id].assistencias + ((partida[*ptrquantPartidas]).jogadores_partida[id].kills * 3); //Calculo da pontuação

        totalPontosPorJogador[id] += pontuacaoJogador[id]; //Calculo da pontuação em todas as partidas
        id++;
    }

    for (int j = 0; j < 5; j++)
    {
        (partida[*ptrquantPartidas]).total_kills_time += (partida[*ptrquantPartidas]).jogadores_partida[j].kills;
        (partida[*ptrquantPartidas]).total_kills_adversario += (partida[*ptrquantPartidas]).jogadores_partida[j].deaths;
        (partida[*ptrquantPartidas]).total_assistencias += (partida[*ptrquantPartidas]).jogadores_partida[j].assistencias;
    } //Calcula o total de Kills, total de deaths e o total de assistências

    printf("| Seu time destriu o Nexus? (s/n)");
    scanf(" %c", &verificaVitoria);
    
    if (verificaVitoria == 's' || verificaVitoria == 'S')
    {
        (partida[*ptrquantPartidas]).vitoria = true;
    }
    else
    {
        (partida[*ptrquantPartidas]).vitoria = false;
    } //Caso o jogador coloque que sim então a partida foi ganha caso ele coloque qualquer outra coisa a partida foi perdida
    

    printf("| Digite quantas torres seu time destruiu: (max 11) ");
    scanf("%d", &(partida[*ptrquantPartidas]).total_torres_destruidas_time); //Recebe a quantidade de torres destruidas pelo time
    while ((partida[*ptrquantPartidas]).total_torres_destruidas_time < 0 || (partida[*ptrquantPartidas]).total_torres_destruidas_time > 11)
    {
        printf("| Quantidade invalida\n| tente digitar um valor entre 0 e 11: ");
        scanf("%d", &(partida[*ptrquantPartidas]).total_torres_destruidas_time);
    }

    printf("| Digite quantas torres seu adversario destruiu: (max 11) ");//Recebe a quantidade de torres destruidas pelo adversario
    scanf("%d", &(partida[*ptrquantPartidas]).total_torres_destruidas_adversario);
    while ((partida[*ptrquantPartidas]).total_torres_destruidas_adversario < 0 || (partida[*ptrquantPartidas]).total_torres_destruidas_adversario > 11)
    {
        printf("| Quantidade invalida\n| tente digitar um valor entre 0 e 11: ");
        scanf("%d", &(partida[*ptrquantPartidas]).total_torres_destruidas_adversario);
    }

    *ptrquantPartidas += 1;
    for (int i = 0; i < *ptrquantPartidas; i++)
    {
        (partida[i]).total_kills_todas_partidas += (partida[i]).total_kills_time;
        (partida[i]).total_assistencias_todas_partidas += (partida[i]).total_assistencias;
    } //Calcula quantidade de kills e assistencias em todas as partidas

    return partida[*ptrquantPartidas];
}

void listarPartida(Partida partida[], int *ptrquantPartidas, Time *time) //Função lista as partidas
{
    int maior = 0, totalPontosPorJogador[50],pontuacaoJogador[5];
    for (int i = 0; i < *ptrquantPartidas; i++)
    {
        printf("| Partida numero %d\n", i+1);
        if ((partida[i]).vitoria == true)
        {
            printf("| Vitoria!!\n");
        }
        else
        {
            printf("| Derrota!\n");
        }
        printf("| Seu time deu %d kill(s)\n", (partida[i].total_kills_time));
        printf("| Seu time teve %d death(s)\n", (partida[i].total_kills_adversario));
        printf("| Seu time destruiu %d torre(s)\n", (partida[i]).total_torres_destruidas_time);
        printf("| Seu time teve %d torre(s) destruida(s)\n", (partida[i]).total_torres_destruidas_adversario);

        for (int n = 0; n < 5; n++)
        {
            pontuacaoJogador[n] = (partida[i]).jogadores_partida[n].assistencias + ((partida[i]).jogadores_partida[n].kills * 3); //Calculo da pontuação

            totalPontosPorJogador[n] += pontuacaoJogador[n]; //Calculo da pontuação em todas as partidas
        }
        
        for (int k = 0; k < 5; k++)
        {
            if (totalPontosPorJogador[k] > maior && totalPontosPorJogador[k] >= 0)
                maior = totalPontosPorJogador[k];
            
        }
        for (int j = 0; j < 5; j++)
        {
            if (totalPontosPorJogador[j] == maior)
            {
                printf("| O jogador com maior pontuacao eh o: \n| Nome: %s \n| Posicao: %s\n", (*time).jogador[j].nome, (*time).jogador[j].posicao);
            }
        }
        
    }
}

void pesquisarJogador(Time *time, int id, int totalPontosPorJogador[]) //Função de pesquisar jogadores
{
    int i = 0, j = 0, verificaId=0, idJogador;

    printf("| Insira o id do jogador que voce deseja esta procurando: ");
    scanf("%d", &i);

    for (int j = 0; j < 5; j++)
    {
        if ((*time).jogador[j].id == i)
        {
            verificaId++;
            (*time).jogador[j].id = (*time).jogador[j].id;
            idJogador =j;
        }   
    }

    while (verificaId == 0)
    {
        printf("| Esse jogador nao existe tente outro ");
        scanf("%d", &i);
        for (int j = 0; j < 5; j++)
        {
            if ((*time).jogador[j].id == i)
            {
                verificaId++;
                (*time).jogador[j].id = (*time).jogador[j].id;
                idJogador =j;
            }   
        }
    }
    

    printf("| Exibindo resultados encontrados...\n");
    printf("| id: %d \n| Nome: %s \n| Posicao: %s\n| Idade: %d\n| Total de pontos: %d\n", (*time).jogador[idJogador].id, (*time).jogador[idJogador].nome, (*time).jogador[idJogador].posicao, (*time).jogador[idJogador].idade, totalPontosPorJogador[idJogador]);
}

void totalKillsAssistencias(Partida partida[], int *ptrquantPartidas) //Função total de kills e assistencias
{
    int i = 0;
    
    printf("| A quantidade de kills que o time fez foi %d\n", (partida[i]).total_kills_todas_partidas);
    printf("| A quantidade de assistencias que o time fez foi %d\n", (partida[i]).total_assistencias_todas_partidas);
}

void menorPontuacao(int totalPontosPorJogador[], Time *time, int id) //Função de calcular o jogador com a menor pontuação
{
    int menor = 0, i;
    for (i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            menor = totalPontosPorJogador[i];
        }
        else
        {
            if (totalPontosPorJogador[i] < menor && totalPontosPorJogador[i] >= 0)
                menor = totalPontosPorJogador[i];
        }
    }
    for (int j = 0; j < 5; j++)
    {
        if (totalPontosPorJogador[j] == menor)
        {
            printf("| O jogador com menor pontuacao foi o:\n| id: %d \n| Nome: %s \n| Posicao: %s\n| Idade: %d\n", (*time).jogador[j].id, (*time).jogador[j].nome, (*time).jogador[j].posicao, (*time).jogador[j].idade);
        }
    }
    printf("| Sua opontuacao foi: %d\n", menor);
}

void maiorPontuacao(int totalPontosPorJogador[], Time *time, int id) //Função de calcular o jogador com a maior pontuação
{
    int maior = 0, i;
    for (i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            maior = totalPontosPorJogador[i];
        }
        else
        {
            if (totalPontosPorJogador[i] > maior && totalPontosPorJogador[i] >= 0)
                maior = totalPontosPorJogador[i];
        }
    }
    for (int j = 0; j < 5; j++)
    {
        if (totalPontosPorJogador[j] == maior)
        {
            printf("| O jogador com maior pontuacao foi o:\n| id: %d \n| Nome: %s \n| Posicao: %s\n| Idade: %d\n", (*time).jogador[j].id, (*time).jogador[j].nome, (*time).jogador[j].posicao, (*time).jogador[j].idade);
        }
    }
    printf("| Sua pontuacao foi: %d\n", maior);
}