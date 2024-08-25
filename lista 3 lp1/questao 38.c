int main (){
    float salario;
    float acresc;
    float menos;
    float total;
    printf("digite o valor de salario: \n");
    scanf("%f",&salario);
    acresc = salario * 0.10;
    menos = salario *  0.15;
    if (salario > 1250.00){
        total = salario + acresc;
    }
    else {
        total = salario - menos;
    }
    printf("o valor total eh de: %.2f",total);
    return 0;

}