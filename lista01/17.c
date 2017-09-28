#include <stdio.h>

int main()
{
	int x, y, aux, s=0, somaQ=0, quadS;
	scanf("%d%d", &x, &y);
	
	while (x != y+1){
		aux = x*x;
		somaQ += aux;
		
		s += x;
		x++;
	}
	quadS = s*s;
	printf("soma dos quadrados	= %d\n", somaQ);
	printf("quadrado da som		= %d\n", quadS);
	printf("difereca		= %d\n", quadS-somaQ);
	
	return 0;
}