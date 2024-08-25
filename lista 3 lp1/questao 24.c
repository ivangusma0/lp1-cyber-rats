#include <stdio.h>

int main() {
    float graus;
    float rad;
    float pi;
    pi = 3.14;
    printf("digite o angulo em graus desejado: ");
    scanf("%f",&graus);
    rad = graus * (pi/180);
    printf("o angulo %.2f em radianos eh %.2f",graus,rad);
    return 0;
}