#include <stdio.h>

int main() {
    float metros;
    float jardas;
    printf("digite o valor de comprimento em metros: ");
    scanf("%f",&metros);
    jardas = metros / 0.91;
    printf("o valor %.2f em metros convertido em jardas eh igual a %.2f",metros,jardas);
    return 0;
}