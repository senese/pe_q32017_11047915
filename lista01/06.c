#include <stdio.h>

int main()
{
    int i, fatorial = 1, x;
    scanf("%d", &x);
    
    for (i=x; i > 1; i--){
        fatorial *= i;
    }
    
    printf("%d\n", fatorial);
    
    return 0;
}