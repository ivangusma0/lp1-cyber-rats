#include <stdio.h>

int main() {
float real;
float hora;
float horareal;
float total;
float add;
printf ("digite o valor da hora de trabalho: \n");
scanf("%f", &real);
printf("digite as horas trabalhadas: \n");
scanf ("%f",&hora);
horareal = real * hora;
add = horareal * 0.10;
total = add + horareal;
printf ("o valor a ser pago ao funcionario com os acrescimos eh R$ %.2f ",total);
return 0;
}