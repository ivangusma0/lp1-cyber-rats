#include <stdio.h>

int main (){
    float premio = 780000.00;
    float quant1;
    float quant2;
    float quant3;
    quant1 = premio * 0.46;
    quant2 = premio * 0.32;
    quant3 = premio * 0.22;
    printf("a quantidade que o primeiro ganhador recebera eh:%.2f \n", quant1);
    printf("a quantidade que o segundo ganhador recebera eh: %.2f \n", quant2);
    printf("a quantidade que o terceiro ganhador recebera eh:%.2f \n", quant3);
    return 0;

}