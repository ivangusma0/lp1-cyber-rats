#include <stdio.h>

int main() {
    float comprimento;
    float centimetros;
    printf("digite o valor de comprimento em polegadas: ");
    scanf("%f",&comprimento);
    centimetros = comprimento * 2.54;
    printf("o valor do comprimento %.2f centimetros eh igual a: %.2f",comprimento,centimetros);
    return 0;
}