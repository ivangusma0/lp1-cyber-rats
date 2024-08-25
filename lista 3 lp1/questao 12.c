#include <stdio.h>
#include <math.h> 

int main() {
    float a, b, hipotenusa;

    printf("Digite o valor do cateto a: ");
    scanf("%f", &a);
    printf("Digite o valor do cateto b: ");
    scanf("%f", &b);
    hipotenusa = sqrt((a * a) + (b * b));
    printf("O valor da hipotenusa é: %.2f\n", hipotenusa);

    return 0;
}