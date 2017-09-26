#include <stdio.h>

int main()
{
    int i, soma=0, v[10];
    double media;
    
    for (i=0; i<=9; i++){
        scanf("%d", &v[i]);
        soma += v[i];
    }
    
    media = soma/10.0;
    
    printf("Soma: %d\n", soma);
    printf("Média: %.1lf\n", media);
    
    return 0;
}