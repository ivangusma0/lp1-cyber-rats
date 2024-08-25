#include <stdio.h>

int main() {
    int dias;
    int horas;
    int minutos;
    int segundos;
    int totalsegundos;
    printf("Digite o numero de dias: ");
    scanf("%d", &dias);
    printf("Digite o numero de horas: ");
    scanf("%d", &horas);
    printf("Digite o numero de minutos: ");
    scanf("%d", &minutos);
    printf("Digite o numero de segundos: ");
    scanf("%d", &segundos);
    totalsegundos = (dias * 24 * 3600) + (horas * 3600) + (minutos * 60) + segundos;
    printf("O total em segundos eh: %d\n", totalsegundos);

    return 0;
}