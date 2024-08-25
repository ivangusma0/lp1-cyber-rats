#include <stdio.h>

int main() {
    float milha;
    float km;
    printf("informe quantos quilometros desejados: ");
    scanf("%f",&km);
    milha = km / 1.61;
    printf("o quilometro %.1f convertido em milhas eh igual a %.1f",km,milha);

    return 0;
}