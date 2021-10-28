#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int eh_primoX(int X);
int eh_primoY(int Y);
int eh_primoZ(int Z);
int fatorialX(int X);
int fatorialY(int Y);
int fatorialZ(int Z);
int fatorialDaSoma(int X, int Y, int Z);
int fatorialXY(int X, int Y);
int fatorialZY(int Y, int Z);

int main()
{
  int X = 7, Y = 7, Z = 7, primoX = 0, i, primoY = 0, primoZ = 0, menu = 0, voltarmenu, caso1 = 0, caso2 = 0, caso3 = 0, caso4 = 0;

  while (X < 0 || X >= 7 || primoX == 0)//valida número X
  {
    system("clear||cls");
    printf("Escreva o primeiro numero: ");
    scanf("%d", &X);
    primoX = eh_primoX(X);
  }

  while (Y < 0 || Y >= 7 || primoY == 0)//valida número Y
  {
    system("clear||cls");
    printf("Escreva o segundo numero: ");
    scanf("%d", &Y);
    primoY = eh_primoX(Y);
  }

  while (Z < 0 || Z >= 7 || primoZ == 0)//valida número Z
  {
    system("clear||cls");
    printf("Escreva o terceiro numero: ");
    scanf("%d", &Z);
    primoZ = eh_primoZ(Z);
  }

  do
  {
    system("clear||cls"); //limpar tela
    printf("+----------------------------------------------------------------------+\n");
    printf("|                                 Menu:                                |\n");
    printf("+----------------------------------------------------------------------+\n");
    printf("| 01 - x! + y! + z!                                                    |\n");
    printf("| 02 - (x + y + z)!                                                    |\n");
    printf("| 03 - (x+y)! + (x-z)!                                                 |\n");
    printf("| 04 - x! - (z+y)!                                                     |\n");
    printf("| 05 - Se fossem lados, os 3 numeros formariam um triangulo equilatero?|\n");
    printf("| 06 - Se fossem lados, os 3 numeros formariam um triangulo isosceles? |\n");
    printf("| 07 - Sair                                                            |\n");
    printf("+----------------------------------------------------------------------+\n");

    scanf("%i", &menu); // Lê a opção que o usuário deseja entrar no menu
    switch (menu)
    {
    case 1: //operação x! + y! + z!
      do
      {
        caso1 = fatorialX(X) + fatorialX(Y) + fatorialX(Z);

        system("clear||cls");
        printf("+----------------------------------------+\n");
        printf("| 01 - x! + y! + z!                      |\n");
        printf("+----------------------------------------+\n");
        printf("| x! + y! + z! = %d\n", caso1);
        printf("+----------------------------------------+\n");

        printf("| 0 - voltar                             |\n");
        printf("+----------------------------------------+\n");
        scanf("%d", &voltarmenu); // voltar para o menu
      } while (voltarmenu != 0);
      break;
    case 2: //operação (x + y + z)!
      do
      {
        caso2 = fatorialDaSoma(X, Y, Z);

        system("clear||cls");
        printf("+----------------------------------------+\n");
        printf("| 02 - (x + y + z)!                      |\n");
        printf("+----------------------------------------+\n");
        printf("| (x + y + z)! = %d\n", caso2);
        printf("+----------------------------------------+\n");

        printf("| 0 - voltar                             |\n");
        printf("+----------------------------------------+\n");
        scanf("%d", &voltarmenu); // voltar para o menu
      } while (voltarmenu != 0);
      break;
    case 3: //operação (x+y)! + (x-z)
      do
      {
        caso3 = fatorialXY(X, Y) + (X - Z);

        system("clear||cls");
        printf("+----------------------------------------+\n");
        printf("| 03 - (x+y)! + (x-z)                    |\n");
        printf("+----------------------------------------+\n");
        printf("| (x+y)! + (x-z)  = %d\n", caso3);
        printf("+----------------------------------------+\n");

        printf("| 0 - voltar                             |\n");
        printf("+----------------------------------------+\n");
        scanf("%d", &voltarmenu); // voltar para o menu
      } while (voltarmenu != 0);
      break;
    case 4: //operação x! - (z+y)!
      do
      {
        caso4 = fatorialX(X) - fatorialZY(Y, Z);

        system("clear||cls");
        printf("+----------------------------------------+\n");
        printf("| 04 - x! - (z+y)!                       |\n");
        printf("+----------------------------------------+\n");
        printf("| x! - (z+y)! = %d \n", caso4);
        printf("+----------------------------------------+\n");

        printf("| 0 - voltar                             |\n");
        printf("+----------------------------------------+\n");
        scanf("%d", &voltarmenu); // voltar para o menu
      } while (voltarmenu != 0);
      break;
    case 5: //Os 3 numeros formariam um triangulo equilatero?
      do
      {
        system("clear||cls");
        printf("+-----------------------------------------------------+\n");
        printf("| 05 - Os 3 numeros formariam um triangulo equilatero?|\n");
        printf("+-----------------------------------------------------+\n");
        if (X == Y && Y == Z && Z == X)
        {
          printf("| Sim!                                                |\n");
        }
        else
        {
          printf("| Nao!                                                |\n");
        }

        printf("+-----------------------------------------------------+\n");

        printf("| 0 - voltar                                          |\n");
        printf("+-----------------------------------------------------+\n");
        scanf("%d", &voltarmenu); // voltar para o menu
      } while (voltarmenu != 0);
      break;
    case 6: //Os 3 numeros formariam um triangulo equilatero?
      do
      {
        system("clear||cls");
        printf("+-----------------------------------------------------+\n");
        printf("| 05 - Os 3 numeros formariam um triangulo equilatero?|\n");
        printf("+-----------------------------------------------------+\n");
        if (X == Y && Y != Z || Y == Z && Z != X || Z == X && X != Y)
        {
          printf("| Sim!                                                |\n");
        }
        else
        {
          printf("| Nao!                                                |\n");
        }

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

int eh_primoX(int X)
{ //verifica se o número na variavel X é primo
  int contador = 0, i, primoX = 0;

  if (X < 0 || X >= 7)
  {
    X = 7;
  }

  for (i = 1; i <= X; i++)
  {
    if (X % i == 0)
      contador++;
  }
  if (contador == 2)
  {
    primoX = 0;
    contador = 0;
  }
  else
  {
    primoX = 1;
  }
  return primoX;
}

int eh_primoY(int Y)
{ //verifica se o número na variavel Y é primo
  int contador = 0, i, primoY = 0;

  if (Y < 0 || Y >= 7)
  {
    Y = 7;
  }

  for (i = 1; i <= Y; i++)
  {
    if (Y % i == 0)
      contador++;
  }
  if (contador == 2)
  {
    primoY = 0;
    contador = 0;
  }
  else
  {
    primoY = 1;
  }
  return primoY;
}

int eh_primoZ(int Z)
{ //verifica se o número na variavel Z é primo
  int contador = 0, i, primoZ = 0;

  if (Z < 0 || Z >= 7)
  {
    Z = 7;
  }

  for (i = 1; i <= Z; i++)
  {
    if (Z % i == 0)
      contador++;
  }
  if (contador == 2)
  {
    primoZ = 0;
    contador = 0;
  }
  else
  {
    primoZ = 1;
  }
  return primoZ;
}

int fatorialX(int X)
{ //fatora o número na variavel X
  int i, f;

  f = 1;
  for (i = 1; i <= X; i++)
  {
    f *= i;
  }
  return f;
}

int fatorialY(int Y)
{ //fatora o número na variavel Y
  int i, f;

  f = 1;
  for (i = 1; i <= Y; i++)
  {
    f *= i;
  }
  return f;
}

int fatorialZ(int Z)
{ //fatora o número na variavel Z
  int i, f;

  f = 1;
  for (i = 1; i <= Z; i++)
  {
    f *= i;
  }
  return f;
}

int fatorialDaSoma(int X, int Y, int Z)
{ //fatora a soma dos números na variavel X, Y e Z
  int i, f, Soma = 0;
  Soma = X + Y + Z;
  f = 1;
  for (i = 1; i <= Soma; i++)
  {
    f *= i;
  }
  return f;
}

int fatorialXY(int X, int Y)
{ //fatora a soma dos números na variavel X e Y
  int i, f, Soma = 0;
  Soma = X + Y;
  f = 1;
  for (i = 1; i <= Soma; i++)
  {
    f *= i;
  }
  return f;
}

int fatorialZY(int Y, int Z)
{ //fatora a soma dos números na variavel Y e Z
  int i, f, Soma = 0;
  Soma = Z + Y;
  f = 1;
  for (i = 1; i <= Soma; i++)
  {
    f *= i;
  }
  return f;
}