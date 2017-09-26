#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    
    for (i=100; i <= n; i += 2){
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}