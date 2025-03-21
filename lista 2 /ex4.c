#include <stdio.h>
int main(){
  char nome[40];
  int horasTrabalhadas, NumDependentes;
  float salarioHora = 12.0;
  float valorDependente = 40.0;
  float salarioBruto, descontoInss, descontoIr, salarioLiqui;
  
  printf("Digite o nome do funcionario: ");
  fflush(stdin);
  fgets(nome,40,stdin);
  printf("Digite o numero de horas trabalhadas: ");
  scanf("%d", &horasTrabalhadas);
  printf("Digite o numero de dependentes: ");
  scanf("%d", &NumDependentes);
  
  salarioBruto = (horasTrabalhadas * salarioHora) + (NumDependentes + valorDependente);
  descontoInss = salarioBruto * 0.085;
  descontoIr = salarioBruto * 0.05;
  salarioLiqui = salarioBruto - (descontoInss + descontoIr);
  
  printf("Nome: %s", nome);
  printf("Salario Bruto: R$ %.2f \n", salarioBruto);
  printf("Desconto INSS: R$ %.2f \n", descontoInss);
  printf("Desconto IR: R$ %.2f \n", descontoIr);
  printf("Salario liquido: R$ %.2f \n", salarioLiqui);
  
  return 0;
  
}
