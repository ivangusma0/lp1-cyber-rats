#include <stdio.h>

int main() {
    float fah;
    float celsius;
    printf("digite uma temperatura em fahrenheint: ");
    scanf("%f",&fah);
    celsius = 5.0 * (fah - 32.0) / 9.0;
    printf(" a temperatura em fah %.1f para celsius eh: %.1f",fah,celsius);

    return 0;
}