#include <stdio.h>
int main(){
  char nome[40], cargo[40];
  int idade;
  float salarioBrutoAnterior, salarioBrutoCorrigido, valorGrat, valorDesc, salarioLiq;
  
  printf ("Digite o nome do funcionario: ");
  fflush(stdin);
  fgets(nome, 40, stdin);
  printf("Digite a idade: ");
  scanf("%d", &idade);
  printf("Digite o cargo: ");
  fflush(stdin);
  fgets(cargo, 40, stdin);
  printf("Digite o salario bruto: ");
  scanf("%f", &salarioBrutoAnterior);
  
  salarioBrutoCorrigido = salarioBrutoAnterior * 1.38;
  valorGrat = salarioBrutoCorrigido * 0.20;
  valorDesc = (salarioBrutoCorrigido + valorGrat) * 0.15;
  salarioLiq = ( salarioBrutoCorrigido + valorGrat) - valorDesc;
  
  printf("Nome: %s \n", nome);
  printf("Idade: %d \n", idade);
  printf("Cargo: %s \n", cargo);
  printf("Salario bruto anterior: R$ %.2f \n", salarioBrutoAnterior);
  printf("Salario bruto corrigido: R$ %.2f \n", salarioBrutoCorrigido);
  printf("Valor da gratificacao: R$ %.2f \n", valorGrat);
  printf("Valor descontado foi de: R$ %.2f \n", valorDesc);
  printf("O salario liquido é de: R$ %.2f \n", salarioLiq);
  
  return 0;
}
