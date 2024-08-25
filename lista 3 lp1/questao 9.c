#include <stdio.h>

int main (){
    float pi;
    float area;
    float raio;
    printf ("digite o valor do raio: ");
    scanf ("%f", &raio);
    pi = 3.141592;
    area = (raio * raio) * pi;
    printf ("o valor da area do ciruclo eh: %.2f", area);
    return 0;
}