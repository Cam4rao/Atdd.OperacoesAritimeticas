#include <stdio.h>

int main() {
    float custoFabrica;
    float custoConsumidor;
    float percentualDistribuidor = 0.28; // 28%
    float percentualImpostos = 0.45; // 45% (SE ESSAS TAXAS FOREM REAIS E NÃO APENAS EXEMPLO PARA O EXERCICIO EU JURO QUE SAIO DO BRASIL NA PRIMEIRA OPORTUNIDADE DA MINHA VIDA!)

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);

    custoConsumidor = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * percentualImpostos);
    printf("O custo final ao consumidor eh: R$ %.2f\n", custoConsumidor);

    return 0;
}