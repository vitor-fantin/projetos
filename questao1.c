/*
autor: Vitor fantin
data: 25/03/2025
objetivo: Somar 5 se positivo e 8 se for negativo
*/

#include <stdio.h>

int main()
{

    float variavel;

    int numero;

    printf("Digite um valor: ");
    scanf("%d", &numero);

    if (numero == 0){
        numero = numero + 15;
    } else if (numero > 0){
        numero = numero + 5;
    } else{
        numero = numero + 8;
    }
    printf("O valor final e: %d\n", numero);

    return 0;
}