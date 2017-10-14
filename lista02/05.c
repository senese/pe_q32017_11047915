#include <stdio.h>

void coefbinomial(int n1, int k1, int nk)
{
	int num = n1;
	int den = k1*nk;
	int coef = num/den;
	
	printf("%d\n", coef);
}

void fatorial(int n, int k)
{
	int i, n1, k1, nk;
	n1 = 1;
	k1 = 1;
	nk = 1;
	
	for (i=n; i>0; i--){
		n1 *= i;
	}
	
	for (i=k; i>0; i--){
		k1 *= i;
	}
	
	for (i=n-k; i>0; i--){
		nk *= i;
	}
	
	coefbinomial(n1, k1, nk);
}

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	
	fatorial(n,k);
	
	return 0;
}