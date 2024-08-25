#include <stdio.h>

int main() {
    float quilogramas;
    float libras;
    printf("digite o valor de libras em massa: ");
    scanf("%f",&libras);
    quilogramas = libras / 2.2406;
    printf("o valor %.2f de libras em massa convertido em quilogramas eh igual a %.2f",libras,quilogramas);
    return 0;
}