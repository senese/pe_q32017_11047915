#include <stdio.h>

int main()
{
    double temperatura;
    int opcao;
    
    printf("Digite um valor de temperatura e '1' para converter de Celsius para Kelvin ou '2' de Kelvin para Celsius: ");
    scanf("%lf%d", &temperatura, &opcao);
    
    if (opcao != 1 && opcao != 2){
        while (opcao != 1 && opcao != 2){
            printf("Apenas 1 ou 2!\n");
            scanf("%d", &opcao);
        }
    } else {
        if (opcao == 1){
            temperatura = temperatura+273.15;
        } else {
            temperatura = temperatura-273.15;
        }
    }
    
    printf("Temperatura convertida: %.2lf\n", temperatura);
    
    return 0;
}