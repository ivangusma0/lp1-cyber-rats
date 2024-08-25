#include <stdio.h>

int main() {
    float km;
    float metros;
    printf("informe quantos metros desejados: ");
    scanf("%f",&metros);
    km = metros * 3.6;
    printf("a quilometragem %.1fkm/h convertida em metros eh igual a %.1fm/s",metros,km);

    return 0;
}