#include <stdio.h>

int main() {
    float quilogramas;
    float libras;
    printf("digite o valor de quilogramas em massa: ");
    scanf("%f",&quilogramas);
    libras = quilogramas * 2.2406;
    printf("o valor %.2f de quilogramas em massa convertido em libras eh igual a %.2f",quilogramas,libras);
    return 0;
}