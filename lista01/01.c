#include <stdio.h>

int main()
{
    int valor, resto;
    scanf("%d", &valor);
    
    resto = valor%2;
    
    if (resto == 0)
        printf("O número é par\n");
    else
        printf("O número é impar\n");
    
    return 0;
}