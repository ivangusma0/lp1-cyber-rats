#include <stdio.h>
#include <math.h>

int main() {
    double co1;
    double co2;
    double resultado;
    printf("digite um valor de coordenada x: ");
    scanf("%lf",&co1);
    printf("digite um valor de coordenada y: ");
    scanf("%lf",&co2);
    resultado = sqrt(pow((double)(co1 - 0), 2.0) + pow((double)(co2 - 0), 2.0));
    printf("o resultado eh: %.2lf",resultado);
    
    return 0;
}