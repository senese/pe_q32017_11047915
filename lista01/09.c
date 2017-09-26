#include <stdio.h>

int main()
{
    double temperatura;
    int opcao;
    
    printf("Digite um valor de temperatura e '1' para converter de Celsius para Fahrenheit ou '2' de Fahrenheit para Celsius: ");
    scanf("%lf%d", &temperatura, &opcao);
    
    if (opcao != 1 && opcao != 2){
        while (opcao != 1 && opcao != 2){
            printf("Apenas 1 ou 2!\n");
            scanf("%d", &opcao);
        }
    } else {
        if (opcao == 1){
            temperatura = temperatura*1.8 + 32;
        } else {
            temperatura = (temperatura-32)/1.8;
        }
    }
    
    printf("Temperatura convertida: %.1lf\n", temperatura);
    
    return 0;
}