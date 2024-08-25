#include <stdio.h>

int main() {
  int matricula;
  float nota1;
  float m1;
  float nota2;
  float m2;
  float nota3;
  float m3;
  float total;
  printf ("qual é a matricula do aluno? \n");
  scanf("%d",&matricula);
  printf ("digite o valor da primeira nota: \n");
  scanf("%f",&nota1);
  m1 = (1*nota1)/1;
  printf("digite o valor da segunda nota: \n");
  scanf("%f",&nota2);
  m2 = (1*nota2)/1;
  printf ("digite o valor da terceira nota: \n");
  scanf("%f",&nota3);
  m3 = (nota3 * 2)/2;
  total = m1 + m2 + m3;
  printf("o aluno de matricula %d obteve uma media de %.2f",matricula,total);

    return 0;
}