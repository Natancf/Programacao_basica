#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
int a,b,L,L2;
void gotoxy(int x,int y){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main(){
    /*//menu*/
    int opcao;
    do{
        inicio:
        opcao=0;
        L=1;L2=10;b=2;
        system("cls");
        printf("\n      1 - JOGAR \n      2 - RANKINGS \n      3 - CREDITOS \n      4 - SAIR\n");
        do{
            gotoxy(1,L);
            printf("-->");
            gotoxy(10,6);
            if(kbhit){a=getch();}
            if(a == 80 && b < 5){L2=L;L++;b++;}/*seta p/baixo*/
            if(a == 72 && b > 2){L2=L;L--;b--;}/*seta p/cima */
            if(L!=L2){gotoxy(1,L2);printf("   ");L2=L;}
            if(a == 13){opcao=b-1;}
        }while(opcao == 0);
        switch (opcao){
            case 1:
                system("cls");
                printf("\n    GAME\n");
                Sleep(2000);
                break;
            case 2:
                system("cls");
                printf("\n    Ranking\n");
                Sleep(2000);
                break;
            case 3:
                system("cls");
                printf("\n    Creditos\n");
                Sleep(2000);
                break;
            case 4:
                system("cls");
                printf("voce pediu para sair, prencione qualquer tecla para continuar\n");
                break;
            default:
                printf("voce deve escolher uma opcao valida\n");
                printf("Precione qualquer tecla para voltar ao menu\n");
                system("pause");
                goto inicio;
        }
    }while(opcao!=4);
    return 0;
}