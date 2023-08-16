#include <stdio.h>

int main() {
    float custoMercadoria;
    float frete;
    float despesasEventuais;
    float valorVenda;
    float custoTotal;
    float lucro;
    float percentualLucro;

    //Determinando variaveis
    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custoMercadoria);
    printf("Digite o valor do frete: ");
    scanf("%f", &frete);
    printf("Digite o valor das despesas eventuais: ");
    scanf("%f", &despesasEventuais);

    custoTotal = custoMercadoria + frete + despesasEventuais;

    printf("Digite o valor de venda: ");
    scanf("%f", &valorVenda);

    // Calculos Finais
    lucro = valorVenda - custoTotal;
    percentualLucro = (lucro / custoTotal) * 100;

    printf("Custo total: %.2f\n", custoTotal);
    printf("Lucro: %.2f\n", lucro);
    printf("Percentual de lucro: %.2f%%\n", percentualLucro);

    return 0;
}