#include <stdio.h>

double calcular_serie(int n) {
  double resultado = 0;
  int sinal = 1;

  for (int k = 1; k <= n; k++) {
    resultado += (double)(sinal * k) / (k * k);
    sinal = -sinal;
  }

  return resultado;
}

int main() {
  int n;
  printf("Digite um número: ");
  scanf("%d",&n);
  double resultado = calcular_serie(n);
  printf("Resultado: %lf\n", resultado);

  return 0;
}
