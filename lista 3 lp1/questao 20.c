#include <stdio.h>

int main() {
    float kelvin;
    float celsius;
    printf("digite uma temperatura em kelvin: ");
    scanf("%f",&kelvin);
    celsius = kelvin - 273.15;
    printf(" a temperatura em kelivn %.1f para celsius eh: %.1f",kelvin,celsius);

    return 0;
}