#include <stdio.h>

int main() {
    float milha;
    float km;
    printf("informe quantas milhas desejadas: ");
    scanf("%f",&milha);
    km = milha * 1.61;
    printf("a milha %.1f convertida em quilometros eh igual a %.1f",milha,km);

    return 0;
}