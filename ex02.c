#include <stdio.h>

float c2f(float gc){
  return (gc * 1.8) + 32;
}

float f2f(float fr){
  return (fr - 32) * 1.8;
}

int main(){
  
  float grausC, grausF, q, r1, r2;
  
  printf("O que voçê deseja?\n");
  printf("(1) Para converter °C para °F.\n(2) Para converter °F para °C.\n");
  scanf("%f",&q);

  if (q == 1){
    
    printf("\nDigite a temperatura em °C: ");
    scanf("%f",&grausC);

    r1 = c2f(grausC);
    printf("O valor de %.1f°C é %.1f°F.", grausC, r1);
  }

  if (q == 2){
    printf("\nDigite a temperatura em °F: ");
    scanf("%f",&grausF);

    r2 = f2f(grausF);
    printf("O valor de %.1f°F é %.1f°C.", grausF, r2);
  }
}