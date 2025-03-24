/*
Autor....: vitor fantin
data.....: 21/03/2025
titulo...: Consumo de combustivel

*/

#include <stdio.h>
int main(){
  float hodoInicial, hodoFinal, litrosGastos, valorTotalRecebido, kmPercorridos, lucroLiquido, consumoMedio;
  float precoCombustivel = 5.24;
  
  printf("Digite a marcacao do hodometro no começo do dia: ");
  scanf("%f", &hodoInicial);
  printf("Digite a marcacao do hodometro no final do dia: ");
  scanf("%f", &hodoFinal);
  printf("Digite quantos litros de combustivel foram gastos: ");
  scanf("%f", litrosGastos);
  printf("Digite o valor total recebido: ");
  scanf("%f", valorTotalRecebido);
  
  kmPercorridos = hodoInicial - hodoFinal;
  lucroLiquido = valorTotalRecebido - (litrosGastos * precoCombustivel);
  consumoMedio = kmPercorridos / litrosGastos;
  
  printf("Marcacao do hodometro inicial: %.2f km/h \n", hodoInicial);
  printf("Marcacao do hodometro final: %.2f km/h \n"), hodoFinal;
  printf("Quantidade de quilometros percorridos no dia: %.2f \n", kmPercorridos);
  printf("Lucro liquido do dia: %.2f R$ \n", lucroLiquido);
  printf("O consumo medio foi de: %.2f km/L \n", consumoMedio);
  
  return 0;
  
}
