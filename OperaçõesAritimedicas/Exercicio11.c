#include <stdio.h>

int main() {
    int numCarrosVendidos;
    float valorVendas;
    float salarioFixo;
    float valorPorCarroVendido;
    float comissaoPorCarro;
    float comissaoPorVendas;
    float salarioFinal;

    // Solicita o número de carros vendidos ao usuário, o valor total das vendas ao usuario, o salario fixo
    //o valor por carro vendido
    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorVendas);
    printf("Digite o salario fixo do vendedor: ");
    scanf("%f", &salarioFixo);
    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valorPorCarroVendido);

    // Calcula a comissão por carro e por vendas e por fim calcula o salario final do vendedor
    //(salarioFixo + comissaoPorCarro + comissaoPorVendas)
    comissaoPorCarro = numCarrosVendidos * valorPorCarroVendido;
    comissaoPorVendas = valorVendas * 0.05; // 5% do valor das vendas
    salarioFinal = salarioFixo + comissaoPorCarro + comissaoPorVendas;

    printf("O salario final do vendedor eh: R$ %.2f\n", salarioFinal);

    return 0;
}