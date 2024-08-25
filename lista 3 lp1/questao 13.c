#include <stdio.h>

int main() {
    int horainicio;
    int minutoinicio;
    int segundoinicio;
    int duracao;
    int horafim;
    int minutofim;
    int segundofim;
    printf("Digite o horario de inicio (hora):\n");
    scanf("%d", &horainicio);
    printf("Digite o horario de inicio (minuto):\n");
    scanf("%d", &minutoinicio);
    printf("Digite o horario de inicio (segundo):\n");
    scanf("%d",&segundoinicio);
    printf("Digite a duracao da experiencia em segundos:\n");
    scanf("%d", &duracao);
    segundofim = segundoinicio + duracao;
    minutofim = minutoinicio + segundofim / 60;
    segundofim = segundofim % 60;
    horafim = horainicio + minutofim / 60;
    minutofim = minutofim % 60;
    horafim = horafim % 24;  
    printf("O horario de termino eh: %02d:%02d:%02d\n", horafim, minutofim, segundofim);

    return 0;
}