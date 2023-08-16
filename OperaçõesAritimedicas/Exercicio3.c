#include <stdio.h>

int main() {
    
    //CALCULO APENAS PARA UMA SALA QUADRADA!!!

    float lado; // Medida do lado da sala
    float area; // Área da sala
    
    printf("Digite a medida do lado da sala: ");
    scanf("%f", &lado);
    
    area = lado * lado;
    
    printf("A area da sala eh: %.2f metros quadrados\n", area);
    
    return 0;
}