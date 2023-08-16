#include <stdio.h>

int main() {
    float raio;
    float area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area = 3.14 * raio * raio;

    printf("A area do círculo eh: %.2f\n", area);

    return 0;
}