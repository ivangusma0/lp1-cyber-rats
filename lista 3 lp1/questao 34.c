#include <stdio.h>

int main() {
    float metros;
    float jardas;
    printf("digite o valor de comprimento em jardas: ");
    scanf("%f",&jardas);
    metros = jardas * 0.91;
    printf("o valor %.2f em jardas convertido em metros eh igual a %.2f",jardas,metros);
    return 0;
}