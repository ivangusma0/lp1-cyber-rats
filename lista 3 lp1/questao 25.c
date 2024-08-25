#include <stdio.h>

int main() {
    float graus;
    float rad;
    float pi;
    pi = 3.14;
    printf("digite o angulo em rad desejado: ");
    scanf("%f",&rad);
    graus = rad * (180/pi);
    printf("o angulo %.2f em radianos eh %.2f",rad,graus);
    return 0;
}