#include <stdio.h>

int main() {
    double num1, num2;
    
    // Solicitar os números ao usuário
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);
    
    // Calcular e exibir os resultados
    printf("Soma: %.2lf\n", num1 + num2);
    printf("Subtracao: %.2lf\n", num1 - num2);
    printf("Multiplicacao: %.2lf\n", num1 * num2);
    
    return 0;
}