#include <stdio.h>

float soma(float a, float b, float c){
  return a + b + c;
}

int main(void) {
 
  float v1,v2,v3,resultado;
  
  printf("Digite um valor: ");
  scanf("%f", &v1);

  printf("\nDigite outro valor: ");
  scanf("%f", &v2);

  printf("\nDigite outro valor: ");
  scanf("%f", &v3);
  
  resultado = soma (v1, v2, v3);
  printf("\nO resultado da soma é: %f", resultado);
}