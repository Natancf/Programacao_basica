#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int verificaEmail(char email[]); //verifica email  
int verificaArroba(char email[]); // verifica se tem arroba e quantos
int verificaPontos(char email[]); // varifica se tem pontos
int validaUsername(char username[]); //valida username
int validapassword(char password[]); //valida password
int validalogin(char email[], char username[], char password[]); //valida login
int validacaoFraseSinistra(char frasesinistra[]); //valida frase sinistra

int main(void){
    char email[200], username[30], password[60], frasesinistra[200];

    printf("Sign in\n");

    printf("    E-mail: ");
    scanf("%s", email);
    getchar();
    
    
    printf("    username: ");
    fgets(username,11,stdin);

    printf("    password: ");
    fgets(password,41,stdin);

    validalogin( email, username, password); // Função para validação final do login

    if (validalogin( email, username, password) != 0)
    {
        printf("Login invalido!");
    }else{
        printf("Dados de login confirmados\n");
        printf("Ultima validacao...\n");
        printf("Insira uma frase sinistra: \n");
        fgets(frasesinistra,200,stdin);
        
        if (validacaoFraseSinistra(frasesinistra) == 4) // Função para validação da frase sinistra
        {
            printf("Parabéns cara, você conseguiu!\n");
        }else{
            printf("Login invalido!");
        }
    }

    return 0;
}

//////////////////////////////////////////
// Função para verificar o email
//////////////////////////////////////////

int verificaEmail(char email[]){
    int i, quantidadecharinvalidos=0;

    for (i = 0; email[i] != '\0'; i++) { 
        if ( email[i] >= 97 && email[i] <= 122 && verificaArroba(email) == 1 && verificaPontos(email) >= 1) { 
        }else{
            quantidadecharinvalidos++;
        }
    }
    
    return quantidadecharinvalidos;
}

//////////////////////////////////////////
// Função para verificação do @ no email
//////////////////////////////////////////

int verificaArroba(char email[]){
    int i, quantidadeArroba=0;
    for(i=0; email[i] != '\0';i++){
        if(email[i] == '@'){
            quantidadeArroba++;
        }
    }

    return quantidadeArroba;
}

//////////////////////////////////////////
// Função para verificação de pontos no email
//////////////////////////////////////////

int verificaPontos(char email[]){
    int i, quantidadePontos=0;
    for(i=0; email[i] != '\0';i++){
        if(email[i] == '.'){
            quantidadePontos++;
        }
    }

    return quantidadePontos;
}

//////////////////////////////////////////
// Função para validação do username
//////////////////////////////////////////

int validaUsername(char username[]){
    int i, quantidadecharinvalidos=0, total=0;

    total = strlen(username);

    for (i = 0; username[i] != '\0'; i++) { 
        if (((*username) >= 'a') && ((*username) <= 'z') && total >= 5 && total <=11 && username[i] >= 97 && username[i] <= 122) { 
        }else{
            quantidadecharinvalidos++;
        }
    }
    
    return quantidadecharinvalidos;
}

//////////////////////////////////////////
// Função para validação da senha
//////////////////////////////////////////

int validapassword(char password[]){
    int i, quantidadecharinvalidos=0, total=0;

    total = strlen(password);

    for (i = 0; password[i] != '\0'; i++) { 
        if (total >= 8 && total <=41) { 
        }else{
            quantidadecharinvalidos++;
        }
    }
    
    return quantidadecharinvalidos;
}

//////////////////////////////////////////
// Função para validação final do login 
//////////////////////////////////////////

int validalogin(char email[], char username[], char password[]){
    int eh_valido=0;

    if (verificaEmail(email) != 0)
    {
        eh_valido++;
    }else{
    }

    if (validaUsername(username) != 0)
    {
        eh_valido++;
    }else{
    }
    
    if (validapassword(password) != 0)
    {
        eh_valido++;
    }else{
    }

    return eh_valido; //Retorna a variante eh_valido
}

//////////////////////////////////////////
// Função para validação da frase sinistra
//////////////////////////////////////////

int validacaoFraseSinistra(char frasesinistra[]){
    int i, quantidadeEspacos=0, frasevalida=0, total=0;

    for(i=0; frasesinistra[i] != '\0';i++){
        if(frasesinistra[i] == ' '){
            quantidadeEspacos++; // Contagem de espaços
        }
    }
        if (quantidadeEspacos >= 4) // Verifica se tem mais que cinco palavras
        {
            frasevalida++;
            //printf("tem mais de 4 espacos \n");
        }
        total = strlen(frasesinistra);
        if (((*frasesinistra) >= 'A') && ((*frasesinistra) <= 'Z')) //Verifica se a primeira letra é maiúscula
        {
            frasevalida++;
            //printf("A primeira eh maiuscula \n");
        }

        if (frasesinistra[total-2] == 46) //Verifica se tem um ponto no final
        {
            frasevalida++;
            //printf("A frase tem ponto \n");
        }

        if (total >= 70) //Verfica se tem mais quem 70 caracteres
        {
            frasevalida++;
            //printf("A frase tem menos que 70 char \n");
        }
        
        //printf("%d",frasevalida);
        
    return frasevalida;
}