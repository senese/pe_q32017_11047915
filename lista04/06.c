#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
	ulint soma = 0;
	while(x) {
		soma = soma + (x%2);
		x = x / 2;
	}
	return soma;
}


ulint f2(ulint x)
{
	ulint soma = 0;
	while (x) {
		soma = soma + (x&1);
		x = x >> 1;
	}
	return soma;
}

int main(void) {
  
  clock_t tempo_init, tempo_fim;
  double tempo_gasto;
  ulint soma = 0;
  int i;
  
  
  tempo_init = clock();
  for (i=0; i<BIGNUM; i++) {
    soma += f1(i);
  }
  tempo_fim = clock();
  tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
  
  tempo_init = clock();
  for (i=0; i<BIGNUM; i++) {
    soma += f2(i);
  }
  tempo_fim = clock();
  tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
  
  return 0;
}