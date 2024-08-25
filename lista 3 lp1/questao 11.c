#include <stdio.h>

int main (){
    float cano = 30;
    float dias;
    float liquido;
    float taxa;
    float total;
    printf ("digite o numero de dias trabalhados: \n");
    scanf ("%f", &dias);
    liquido = cano * dias;
    taxa = liquido * 0.08;
    total = liquido - taxa;
    printf ("para o numero %.0f de dias trabalhados, o encanador recebeu liquido %.2f e com as taxas, o total de %.2f",dias,liquido, total);
    return 0;
    

}