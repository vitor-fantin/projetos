/*
autor.....: Vitor fantin
data......: 25/03/2025
objetivo..: Calcular o imposto de renda
*/

#include <stdio.h>

int main()
{

    float salario;
    float impostoRenda;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    if (salario <= 2824){
        printf("Isento");
    }else(salario <= 3751){
        impostoRenda = salario * 0.075;
    }else(salario <= 4664){
        impostoRenda = salario * 0.15;
    }else(salario <= 7500){
        impostoRenda = salario * 0.225;
    }else{
        impostoRenda = salario * 0.275;
    }

    printf("O valor com imposto de renda sera de: %f", impostoRenda);

    return 0;
}