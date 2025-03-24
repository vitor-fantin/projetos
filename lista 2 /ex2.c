/*
Autor....: vitor fantin
data.....: 21/03/2025
titulo...: Gasto combustivel

*/

#include <stdio.h>
int main(){
  float combustivelGastos, kmPercorridos, gastoDoCombustivel = 5.24;
  float consumoMedio, totalGasto;
  
  printf("Digite quantos litros de combustivel foram gastos: ");
  scanf("%f", &combustivelGastos);
  
  printf("Digite o total de quilometros percorridos: ");
  scanf("%f", &kmPercorridos);
  
  totalGasto = combustivelGastos * gastoDoCombustivel;
  consumoMedio = kmPercorridos / combustivelGastos;
  
  printf("Quantidade de litros gastos: %.2f", combustivelGastos);
  printf("Total de quilometros percorridos: %.2f", kmPercorridos);
  printf("Total gasto de combustivel: %.2f", totalGasto);
  printf("Qual foi o consumo medio de combustivel: %.2f", consumoMedio);
  
  return 0;
  
}
