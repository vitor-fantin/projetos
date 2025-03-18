/*
Autor....: vitor fantin
data.....: 18/03/2025
titulo...: funcao Scanf

*/

#include <stdio.h>
int main(){

    char nome[40];
    char endereco[50];

    printf("Digite seu nome...: ");
    fflush(stdin);
    fgets(nome,40,stdin);
    printf("Digite o endereco..: ");
    fflush(stdin);
    fgets(endereco,50,stdin);

    printf("O meu nome e %s \n", nome);
    printf("Meu endereco e %s \n", endereco);

    return 0;

}