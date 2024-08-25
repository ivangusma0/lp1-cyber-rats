#include <stdio.h>

int main() {
    float kelvin;
    float celsius;
    printf("digite uma temperatura em celsius ");
    scanf("%f",&celsius);
    kelvin = celsius + 273.15;
    printf(" a temperatura em celsius %.1f para kelvin eh: %.1f",celsius,kelvin);

    return 0;
}