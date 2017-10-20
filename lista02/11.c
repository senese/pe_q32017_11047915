#include <stdio.h>

int decTobi(int n, int bin, int aux)
{
    if (n == 0) return bin;
    int resto;
    
	resto = n%2;
	resto = resto*aux;
	
    return decTobi(n/2, bin+resto, aux*10);
}

int biTodec(int n, int dec, int i)
{
    if (n == 0) return dec;
    int resto, k, potencia;
    
	resto = n%10;
	if (i==0){
		potencia = 1;
	} else {
		if (i==1){
			potencia = 2;
		} else {
			potencia = 1;
			for (k=i; k>0; k--){
				potencia = potencia*2;
			}
		}
	}
	
	return biTodec(n/10, dec + potencia*resto, ++i);
}

int main()
{
    int op, n;
    scanf("%d%d", &n, &op);
    
    if (op == 1){
        printf("%d\n", decTobi(n, 0, 1));
    } else {
        printf("%d\n", biTodec(n, 0, 0));
    }
    
    return 0;
}