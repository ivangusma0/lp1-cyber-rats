#include <stdio.h>

int main() {
float num1;
float num2;
float diff;
printf("digite o primeiro numero real: ");
scanf("%f",&num1);
printf("digite o segundo numero real: ");
scanf("%f",&num2);
if (num2 > num1){
    diff = num2 - num1;
}
else {
    diff = num1 - num2;
}
printf("a diferenca do do maior numero com o menor numero eh %.1f",diff);
return 0;
}