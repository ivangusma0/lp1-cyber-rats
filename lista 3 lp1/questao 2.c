#include <stdio.h>

int main (){
    float celsius;
    float F;
    printf("digite a temperatura atual: ");
    scanf ("%f",&celsius);
    F = celsius * (9.0 / 5.0) + 32.0;
    printf ("a temperatura em celsius eh %.1f e em Fahrenheint eh %.1f", celsius, F);
    return 0;



    }