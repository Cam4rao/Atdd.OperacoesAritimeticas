#include <stdio.h>

int main() {
    float valorEmReais; // Valor em reais fornecido pelo usuário
    float taxaDeCambio = 4.99; // Taxa de câmbio atual (1 dólar = 5 reais)
    float valorEmDolares; // Valor convertido para dólares
    
    printf("Digite o valor em reais: ");
    scanf("%f", &valorEmReais);
    
    valorEmDolares = valorEmReais / taxaDeCambio;
    printf("O valor em dolares eh: %.2f\n", valorEmDolares);
    
    return 0;
}