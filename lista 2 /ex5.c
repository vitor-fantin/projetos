#include <stdio.h>
int main(){
  int numEmpregados, numBicicletasVend;
  float salarioMin, precoCusto, precoVenda, comissaoVend, salarioFinal, lucroLiq;
  float totalVendas, totalCusto, totalCom;
  
  printf("Digite o numero de empregados: ");
  scanf("%d", &numEmpregados);
  printf("Digite o numero de bicicletas vendidas: ");
  scanf("%d", &numBicicletasVend);
  printf("Digite o valor do salario minimo: ");
  scanf("%f", salarioMin);
  printf("Digite o preco de custo de cada bicicleta");
  scanf("%f", precoCusto);
  
  precoVenda = precoCusto * 1.50;
  totalVendas = precoVenda * numBicicletasVend;
  totalCusto = precoCusto * numBicicletasVend;
  lucroLiq = totalVendas - totalCusto;
  
  totalCom = precoCusto * 0.15 * numBicicletasVend;
  comissaoVend = totalCom / numEmpregados;
  salarioFinal = (2 * salarioMin) + comissaoVend;
  
  printf("O salario de cada empregado sera de: R$ %.2f \n", salarioFinal);
  printf("Lucro liquido da loja sera de: R$ %.2f \n", lucroLiq);
  
  return 0;
  
}
