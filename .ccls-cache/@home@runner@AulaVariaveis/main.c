#include <stdio.h>

// macro definida
#define VALOR 300

// global
const float NOTA = 10;

int main(void) {
  // local
  const int TAMANHO = 30;

  printf("O valor: %d", VALOR);
  printf("\nA nota: %.2f", NOTA);
  printf("\nO Tamanho: %d", TAMANHO);

  int idade = 38;
  char nome[10] = "Raphael";
  float altura = 1.83;
  double salario = 18000.00;
  printf("\n\nSalario: %.2lf", salario);

  short s = 1;
  int i = 2;
  long l = 3;
  long long ll = 4;
  float f = 5.17889843f;
  double d = 6.142142145123456;
  long double ld = 7.1412512432234524535345423L;
  printf("tamanho do short = %zd\n", sizeof(s));
  printf("tamanho do int = %zd\n", sizeof(i));
  printf("tamanho do long = %zd\n", sizeof(l));
  printf("tamanho do long long = %zd\n", sizeof(ll));
  printf("tamanho do float = %zd, value = %13.13f\n", sizeof(f), f);
  printf("tamanho do short = %zd, value = %17.17lf\n", sizeof(d), d);
  printf("tamanho do short = %zd, value = %52.52Lf\n", sizeof(ld), ld);
  return 0;
}