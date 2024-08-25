#include <stdio.h>

int main() {
    float metros;
    float litros;
    printf("digite o valor metros cubicos: ");
    scanf("%f",&metros);
    litros = metros * 1000;
    printf("o valor %.2f em metros cubicos eh igual a %.2f litros",metros,litros);
    return 0;
}