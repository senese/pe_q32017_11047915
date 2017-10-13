#include <stdio.h>

int par_ou_impar(int x)
{
    if ((x%2) == 0)
        return 0;
    else
        return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", par_ou_impar(n));
    
    return 0;
}