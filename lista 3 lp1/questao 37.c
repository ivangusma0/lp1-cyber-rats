#include <stdio.h>

int main (){
    float salario;
    float liquido;
    float inss;
    float fgts;
    float sindicato;
    float salariofinal;
    printf("digite o valor do salario: ");
    scanf("%f",&salario);
    inss = salario * 0.11;
    fgts = salario * 0.08;
    sindicato = salario * 0.05;
    salariofinal = salario - inss - fgts - sindicato;
    printf("o salario %.2f entregara ao inss %.2f, ao fgts %.2f e ao sindicato %.2f, sobrando %.2f",salario,inss,fgts,sindicato, salariofinal);

    return 0;

}