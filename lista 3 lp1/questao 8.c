#include <stdio.h>

int main (){
    float degrau;
    float altura;
    float qntd;
    printf ("digite o tamanho do degrau: \n");
    scanf ("%f", &degrau);
    printf ("digite a altura desejada: \n");
    scanf ("%f", &altura);
    qntd = altura / degrau;
    printf ("para a altura %.2f metros desejada, sera necessario %.0f degraus", altura, qntd);
    return 0;
    


}