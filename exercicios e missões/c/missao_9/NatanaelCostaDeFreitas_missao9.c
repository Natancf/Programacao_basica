#include <stdio.h>
#include <stdlib.h>

int cadastrar_idade(int idades[], int quant, int i);//cadastra idades
void listar_idades(int idades[], int quant, int i);//lista todas as idades
int Maior(int idades[], int quant, int i);//verifica a maior idade
int Menor(int idades[], int quant, int i);//verifica a menor idade
void NotasMaioresMedia(int idades[], int quant, int i);//lista todas as notas maiores que a média
void NotasMenoresMedia(int idades[], int quant, int i);//lista todas as notas menores que a média
float media(int idades[], int quant, int i);//faz o cálculo da média das idades
int EditarIdade(int idades[], int quant, int i);//edita alguma das idade
void PesquisarAluno(int idades[], int quant, int i);//pesquisar algum aluno em alguma posição

int main(void)
{
  int idades[100], i=0, quant=0, idade=0, maior=0, menor=0, menu=0, voltarmenu,excluir=0,confirmacao;

  printf("Validas idades entre 1 e 149\n");
  do
  {
    quant++;
    idade = cadastrar_idade(idades, quant, i);//função de cadastrar notas

    if (idade == 150)
    {
      break;
    }
    i++;
    
  } while (idade != 150);
      
        
  do
  {
    system("clear||cls"); //limpar tela
    printf("+------------------------------------------+\n");
    printf("|                  Menu:                   |\n");
    printf("+------------------------------------------+\n");
    printf("| 01 - Informacoes Gerais                  |\n");
    printf("| 02 - Lista de idades                     |\n");
    printf("| 03 - Listar Maiores/Menores que a media  |\n");
    printf("| 04 - Editar idade                        |\n");
    printf("| 05 - Excluir idade                       |\n");
    printf("| 06 - Pesquisar posicao                   |\n");
    printf("| 07 - Sair                                |\n");
    printf("+------------------------------------------+\n");

    scanf("%i", &menu); // Lê a opção que o usuário deseja entrar no menu

    switch (menu)
    {
    case 1: //apresenta uma visão geral
      do
      {
        system("clear||cls");
        printf("+--------------------------------------------+\n");
        printf("| Informacoes Gerais                         |\n");
        printf("+--------------------------------------------+\n");
        printf("| Numeros de idades inseridas: %d\n", quant - 1);
        printf("| Media das idades inseridas : %.2f\n", media(idades, quant, i));
        
        printf("| A maior idade foi: %d\n", Maior(idades, quant, i));
        printf("| A menor idade foi: %d\n", Menor(idades, quant, i));
        printf("+--------------------------------------------+\n");

        printf("| 0 - voltar                                 |\n");
        printf("+--------------------------------------------+\n");
        scanf("%d", &voltarmenu); // voltar para o menu
      } while (voltarmenu != 0);
      break;
    case 2: //lista todas as idades
      do
      {
        system("clear||cls");
        printf("+----------------------------------------+\n");
        printf("| Lista de idades                       |\n");
        printf("+----------------------------------------+\n");
        listar_idades(idades, quant, i);//função de listar todas as idades
        printf("+----------------------------------------+\n");

        printf("| 0 - voltar                             |\n");
        printf("+----------------------------------------+\n");
        scanf("%d", &voltarmenu); // voltar para o menu
      } while (voltarmenu != 0);
      break;
    case 3://Apresenta todas as notas maiores que a média e as notas menores que a média
      do
      {
        system("clear||cls");
        printf("+-----------------------------------------+\n");
        printf("| Notas Maiores que a media               |\n");
        printf("+-----------------------------------------+\n");
        NotasMaioresMedia(idades, quant, i);//função listar notas maiores que a média
        printf("+-----------------------------------------+\n");
        printf("| Notas Menores que a media               |\n");
        printf("+-----------------------------------------+\n");
        NotasMenoresMedia(idades, quant, i);//função listar notas menores que a média
        printf("+-----------------------------------------+\n");

        printf("| 0 - voltar                              |\n");
        printf("+-----------------------------------------+\n");
        scanf("%d", &voltarmenu); // voltar para o menu
      } while (voltarmenu != 0);
      break;
    case 4: //Editar idade
      do
      {
        system("clear||cls");
        printf("+-------------------------------------------+\n");
        printf("| Editar idade                              |\n");
        printf("+-------------------------------------------+\n");
        EditarIdade(idades, quant, i);//função que edita alguma das idade
        printf("+-------------------------------------------+\n");

        printf("| 0 - voltar                                |\n");
        printf("+-------------------------------------------+\n");
        scanf("%d", &voltarmenu); // voltar para o menu
      } while (voltarmenu != 0);
      break;
    case 5: //Excluir idade 
      do
      {
        system("clear||cls");
        printf("+-----------------------------------------------------+\n");
        printf("| Excluir idade                                       |\n");
        printf("+-----------------------------------------------------+\n");
        printf("| A idade de qual aluno voce deseja excluir?\n");
        scanf("%d", &excluir);
        excluir = excluir-1;
        if (excluir >= quant-1 || excluir <= 0)
        {
          while (excluir >= quant-1 || excluir < 0)
          {
            printf("| Esse aluno ainda nao foi cadastrado ou nao existe\n| tente outro: ");
            excluir = 0;
            scanf("%d", &excluir);
            excluir = excluir-1;
          }
        }
        printf("| A idade que voce ira excluir eh a %d do aluno %d\n", idades[excluir], excluir+1);
        printf("| Tem certeza que deseja excluir a idade do aluno %d?\n", excluir+1);
        printf("| Sim - 0\n| Nao - 1\n");
        scanf("%d", &confirmacao);
        if (confirmacao != 0)
        {
          printf("Ok\n");
        }else{
          for (i = excluir; i < quant-1; i++)
          {
            idades[i] = idades[i+1];
          }
          quant--;
        }
        
        printf("+-----------------------------------------------------+\n");

        printf("| 0 - voltar                                          |\n");
        printf("+-----------------------------------------------------+\n");
        scanf("%d", &voltarmenu); // voltar para o menu
      } while (voltarmenu != 0);
      break;
    case 6: //Pesquisar aluno
      do
      {
        system("clear||cls");
        printf("+-----------------------------------------------------+\n");
        printf("| Pesquisar aluno                                     |\n");
        printf("+-----------------------------------------------------+\n");
        PesquisarAluno(idades, quant, i);//pesquisar algum aluno em alguma posição
        printf("+-----------------------------------------------------+\n");

        printf("| 0 - voltar                                          |\n");
        printf("+-----------------------------------------------------+\n");
        scanf("%d", &voltarmenu); // voltar para o menu
      } while (voltarmenu != 0);
      break;
    case 7: //sai do programa
      printf("Ate a proxima \n");
    }
    if (voltarmenu == 0)
    { //para que a condição no laço voltarmenu continue verdadeira
      voltarmenu = 1;
    }
  } while (menu != 7);

  return 0;
}
int cadastrar_idade(int idades[], int quant, int i){//função que cadastra idades
  printf("Idade do aluno %d: ", quant);
  scanf("%d", &idades[i]);

  if (idades[i] <= 0 || idades[i] > 150)
  {
    while (idades[i] <= 0 || idades[i] > 150)
    {
      printf("Idade invalida\n");
      printf("Idade do aluno %d: ", quant);
      scanf("%d", &idades[i]);
      i--;
    }
  }

  return idades[i];
}

void listar_idades(int idades[], int quant, int i){//função que lista todas as idades
  int listadeidades[100];
  for (i=0; i < quant-1; i++)
  {
    if (idades[i] >= 1 && idades[i] < 150)
    {
      listadeidades[i] = idades[i];
      printf("| Idade %d: %d\n", i+1 ,listadeidades[i]);
    }
    
  }
}

int Maior(int idades[], int quant, int i){//função que verifica a maior idade
  int maior=0;
  for (i = 0; i < quant-1; i++)
  {
    if (idades[i] > 0 && idades[i] < 150)
    {
      if (i == 0)
      {
        maior = idades[i];
      }else{
        if (idades[i] > maior)
          maior = idades[i];
    }
    }
    
  }
  return maior;
}

int Menor(int idades[], int quant, int i){//função que verifica a menor idade
  int menor=0;
  for (i = 0; i < quant-1; i++)
        {
          if (i == 0)
          {
            menor = idades[i];
          }else{
            if (idades[i] < menor && idades[i] >= 0)
              menor = idades[i];
          }
        }
  return menor;
}

void NotasMaioresMedia(int idades[], int quant, int i){//função que lista as notas maiores que a média
  for (i=0; i < quant-1; i++){
    if (idades[i] > media(idades, quant, i)) {
      printf("| %d\n",idades[i]);
    }
  }
}

void NotasMenoresMedia(int idades[], int quant, int i){//função que lista as notas menores que a média
  for (i=0; i < quant-1; i++){
    if (idades[i] < media(idades, quant, i)) {
      printf("| %d\n",idades[i]);
    }
  }
}

float media(int idades[], int quant, int i){//função que realiza o calculo da media
  float total=0, media=0;
  for (i = 0; i < quant-1; i++)
  {
    total += idades[i];
  }
      
  media = total / (quant - 1);

  return media;
}

int EditarIdade(int idades[], int quant, int i){//função que edita alguma das idade
  int confirmacao=0;
  printf("| A idade de qual aluno voce deseja alterar?|\n");
        i = 0;
        scanf("%d", &i);
        i = i - 1;
        if (i >= quant-1 || i <= 0)
        {
          while (i >= quant-1 || i < 0)
          {
            printf("| Esse aluno ainda nao foi cadastrado ou nao existe\n| tente outro: ");
            i = 0;
            scanf("%d", &i);
            i = i-1;
          }
        }
        printf("| Tem certeza que deseja alterar a idade do aluno %d?\n", i+1);
        printf("| Sim - 0\n| Nao - 1\n");
        scanf("%d", &confirmacao);
        if (confirmacao != 0)
        {
          printf("Ok\n");
        }else{
          printf("| Digite a nova idade: ");
          scanf("%d", &idades[i]);
          if (idades[i] <= 0 || idades[i] > 150)
          {
            while (idades[i] <= 0 || idades[i] > 150)
            {
              i--;
              printf("Idade invalida\n");
              printf("| Digite a nova idade: ");
              scanf("%d", &idades[i]);
            }
          }
        }
  return idades[i];
}

void PesquisarAluno(int idades[], int quant, int i){//função que pesquisar a idade de algum aluno em alguma posição
  printf("| A idade de qual aluno voce deseja pesquisar? |\n");
  i = 0;
  scanf("%d", &i);
  i = i - 1;
  if (i >= quant-1 || i <= 0)
  {
    while (i >= quant-1 || i < 0)
    {
      printf("| Esse aluno ainda nao foi cadastrado ou nao existe\n| tente outro: ");
      i = 0;
      scanf("%d", &i);
      i = i-1;
    }
  }
  printf("%d\n",idades[i]);
}