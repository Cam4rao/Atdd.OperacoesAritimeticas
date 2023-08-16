#include <stdio.h>

int main() {
    double numero;
    
    printf("Digite um numero: ");
    scanf("%lf", &numero);

    double dobro = numero * 2;
    printf("O dobro de %.2lf eh %.2lf\n", numero, dobro);

    return 0;
}