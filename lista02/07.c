#include <stdio.h>

float temperatura(int e, int s, float v)
{
    switch(e){
        case 1:
            if (s == 2){
                v = v*1.8 + 32;
            }
            if (s == 3){
                v = v + 273.15;
            }
            break;
        case 2:
            if (s == 1){
                v = (v-32)/1.8;
            }
            if (s == 3){
                v = (v + 459.67)*(5.0/9.0);
            }
            break;
        case 3:
            if (s == 1){
                v = v - 273.15;
            }
            if (s == 2){
                v = (v*9.0/5.0) - 459.67;
            }
            break;
    }
    
    return v;
}

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
    int tipoconv, ent, saida;
    float v, valor;
    scanf("%d%d%d%f", &tipoconv, &ent, &saida, &valor);
    
    
    if (tipoconv == 1){
        v = temperatura(ent, saida, valor);
        if (saida == 1) printf("%.2f C\n", v);
        if (saida == 2) printf("%.2f F\n", v);
        if (saida == 3) printf("%.2f K\n", v);
    } else {
        if (ent == 1) printf("%d\n", decTobi(valor, 0, 1));
        if (ent == 2) printf("%d\n", biTodec(valor, 0, 0));
    }
    
    return 0;
}