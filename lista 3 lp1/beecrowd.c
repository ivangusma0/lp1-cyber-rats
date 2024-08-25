#include <stdio.h>

int main(){
    double celsius;
    double F;
    double kelvin;
    

    printf("digite o valor em celsius: ");
    scanf("%lf",&celsius);
    F = (celsius * 9.0/5.0) + 32;
    kelvin = celsius + 273.15;
    int valorinteiro = (int) F;
    int valorkelvin = (int) kelvin;
    printf(" o valor em fahrenheint eh: %d\n",valorinteiro);
    printf("o valor em kelvin eh: %d \n",valorkelvin);
    
return 0;
}