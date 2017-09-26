#include <stdio.h>

int main()
{
    int i, n, soma=0;
    scanf("%d", &n);
    
    for (i=1; i<=n; i++){
        soma += i;
    }
    
    printf("%d\n", soma);
    
    return 0;
}