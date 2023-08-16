#include <stdio.h>

int main() {
    int anos;
    int meses;
    int dias;
    int idadeEmDias;

    printf("Digite a idade em anos, meses e dias:\n");
    printf("Anos: ");
    scanf("%d", &anos);
    printf("Meses: ");
    scanf("%d", &meses);
    printf("Dias: ");
    scanf("%d", &dias);

    idadeEmDias = anos * 365 + meses * 30 + dias;
    printf("A idade em dias h: %d dias\n", idadeEmDias);

    return 0;
}