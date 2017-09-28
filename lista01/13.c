#include <stdio.h>

int main()
{
	int i, x, soma=0;
	scanf("%d", &x);
	
	for (i=1; i<=x; i++){
		soma += i;
	}
	
	printf("soma de 1 a %d: %d\n", x, soma);
	
	return 0;
}