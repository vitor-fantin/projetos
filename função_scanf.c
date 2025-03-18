/*
Autor....: vitor fantin
data.....: 18/03/2025
titulo...: funcao Scanf

*/

#include <stdio.h>
int main(){

int num;

printf("Digite um numero: ");
scanf("%d", &num);

printf("\nNumero: %d", num);
printf("\nEndereco: %d", &num);

}