/*
autor: Vitor fantin 
data: 25/03/2025
objetivo: condicional ELSE IF
*/

#include<stdio.h>

int main(){

    float media;
    
    printf("Digite a media: ");
    scanf("%f", &media);

    if ( media >= 7){
        /* code */printf("APROVADO");
    } else {
        printf("REPROVADO");
    }
    return 0;
    
}