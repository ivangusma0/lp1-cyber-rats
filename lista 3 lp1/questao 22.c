#include <stdio.h>

int main() {
    float km;
    float metros;
    printf("informe quantos quilometros desejados: ");
    scanf("%f",&km);
    metros = km / 3.6;
    printf("a quilometragem %.1fkm/h convertida em metros eh igual a %.1fm/s",km,metros);

    return 0;
}