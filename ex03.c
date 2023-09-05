#include <stdio.h>

int tabuada(int N){
  int x;
  for (x = 1; x < 10; x ++){
    printf("%d x %d = %d\n", N, x, N * x);
  }
}

int main(){
  int numero;
  printf("Digite um número inteiro para descobrir a tabuada: ");
  scanf("%d",&numero);
  
  tabuada(numero);

  return(0);
}