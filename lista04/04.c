#include <stdio.h>
#include <time.h>
#include <limits.h>

int f1(int x)
{
	int i;
	while(x%2 == 0)
}

int f2(int x)
{
	return x >> 3;
}

int main(void)
{
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	int a, n;
	scanf("%d", &n);

	tempo_init = clock();
	a = f1(n);
	if (a == 1) printf("sim\n");
	else		printf("nao\n");
	tempo_fim = clock();

	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);


	tempo_init = clock();
	a = f2(n);
	if (a == 1) printf("sim\n");
	else		printf("nao\n");
	tempo_fim = clock();

	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

	return 0;
}