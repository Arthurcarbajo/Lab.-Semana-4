#include <stdio.h>

int divisor(int N, int D) {
  if (D == 0) {
      return 0;
  }
  if (N % D == 0) {
      return 1;
  } else {
    return 0;
  }
}

int contar(int M) {
  int contador = 0;

  for (int i = 1; i <= M; i++) {
    if (divisor(M, i)) {
       contador++;
    }
  }

  return contador;
}

int main() {
  int M;

  printf("Digite um número inteiro (M): ");
  scanf("%d", &M);

  int qtdDivisores = contar(M);

  printf("%d possui %d divisores.\n", M, qtdDivisores);

  return 0;
}
