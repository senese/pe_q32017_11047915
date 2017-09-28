#include <stdio.h>

int main()
{
	int aux=1, i=0, k, dec=0, bin=0, resto, valor, opcao, potencia;
	
	printf("Digite um valor binário ou decimal e '1' para converter de decimal para binário ou '2' de binário para decimal: ");
	scanf("%d%d", &valor, &opcao);
	
	if (opcao != 1 && opcao != 2){
		
		while (opcao != 1 && opcao != 2){
			printf("Apenas 1 ou 2!\n");
			scanf("%d", &opcao);
		}
		
	} else {
		if (opcao == 1){
			/* variável 'aux' controla a casa em que o resto da divisão entra na variável 'bin' */
			while(valor != 0){
				resto = valor%2;
				valor = valor/2;
				resto = resto*aux;
				bin = bin + resto;
				aux = aux*10;
			}
			
			printf("%d\n", bin);
			
		} else {
			
			while(valor != 0){
				resto = valor%10;
				
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
				
				dec = dec + (potencia*resto);
				valor = valor/10;
				i++;
			}
			
			printf("%d\n", dec);
		}
	}
	
	return 0;
}