#include <stdio.h>
#include <math.h>  
int main() {
    double a, b, c, s, area;
    printf("Digite os lados do triangulo:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("A area do triangulo eh: %.2lf\n", area);
        
    } else {

        printf("Os lados fornecidos nao formam um triangulo.\n");
    }

    return 0;
}