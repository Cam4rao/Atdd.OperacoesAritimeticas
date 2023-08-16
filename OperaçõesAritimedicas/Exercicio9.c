#include <stdio.h>

int main() {
    float salarioAtual;
    float percentualReajuste;
    float novoSalario;

    printf("Digite o salario mensal atual do funcionario: ");
    scanf("%f", &salarioAtual);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    novoSalario = salarioAtual + salarioAtual * (percentualReajuste / 100);
    printf("O novo salario eh: R$ %.2f\n", novoSalario);

    return 0;
}