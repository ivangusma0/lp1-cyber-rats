#include <stdio.h>

int main (){
    int x;
    int y;
    int z;
    int qx;
    int qy;
    int qz;
    int soma;
    printf ("digite o valor de x: \n");
    scanf ("%d", &x);
    printf ("digite o valor de y:\n");
    scanf ("%d", &y);
    printf ("digite o valor de z: \n");
    scanf ("%d", &z);
    qx = x * x;
    qy = y * y;
    qz = z * z;
    soma = qx + qy + qz;
    printf (" o valor da soma dos quadrados eh: %d", soma);
    
    return 0;
}