#include <stdio.h>

int main() {
    float comprimento;
    float centimetros;
    printf("digite o valor de centimetros: ");
    scanf("%f",&centimetros);
    comprimento = centimetros / 2.54;
    printf("o valor do centimetro %.2f em comprimento por polegadas eh igual a: %.2f",centimetros,comprimento);
    return 0;
}