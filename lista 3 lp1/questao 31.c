#include <stdio.h>

int main() {
    float metros;
    float litros;
    printf("digite o valor litros: ");
    scanf("%f",&litros);
    metros = litros / 1000;
    printf("o valor %.2f em litros convertido em metros cubicos eh igual a %.2f",litros,metros);
    return 0;
}