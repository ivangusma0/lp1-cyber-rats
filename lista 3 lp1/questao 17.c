#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro positivo de 4 digitos: ");
    scanf("%d", &numero);
    if (numero >= 1000 && numero <= 9999) {
        
        printf("milhar: %d\n", numero / 1000);           
        printf("centena: %d\n", (numero / 100) % 10);     
        printf("dezena: %d\n", (numero / 10) % 10);      
        printf("unidade: %d\n", numero % 10);             
    } else {
        printf("Erro: Por favor, insira um número de 4 dígitos.\n");
    }

    return 0;
}