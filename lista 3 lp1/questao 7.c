#include <stdio.h>

int main (){
    float salario;
    float aumento;
    float nvsalario;
    printf ("digite o seu salario: \n");
    scanf ("%f", &salario);
    aumento = salario * 0.25;
    nvsalario = aumento + salario;
    printf ("o salario %.2f recebeu um aumento de %.2f e foi para %.2f", salario, aumento, nvsalario);
return 0;
}