#include <stdio.h>

int main (){
    float x;
    float z;
    printf ("digite o numero real :\n");
    scanf ("%f", &x);
    z = x * x;
    printf ("o quadrado do numero %.2f eh %.2f", x, z);
    return 0;
}