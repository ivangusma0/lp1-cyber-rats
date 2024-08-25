#include <stdio.h>

int main() {
    int segundos;
    int hora;
    int minuto;
    int segundo_restante;
    printf("digite o valor inteiro ems egundos: ");
    scanf("%d",&segundos);
    hora = segundos / 3600;
    minuto = (segundos % 3600) / 60;
    segundo_restante = segundos % 60;
    printf("%d : %d : %d",hora,minuto,segundo_restante);

    return 0;
}