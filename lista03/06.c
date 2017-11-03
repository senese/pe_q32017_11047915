#include <stdio.h>
#include <stdlib.h>

void mediana(int *v, int n)
{
    int a = n/2;
    
    if ((n%2)!=0){   // mediana é o elemento do meio
        printf("%.2f\n", (float) v[a]);
    } else {
        printf("%.2f\n", (v[a] + v[a-1])/2.0);
    }
}

int cmpfunc (const void *a, const void *b)
{
    return ( * (int*)a - *(int*)b );
}

int main()
{
    int a, i, n;
    int *v;
    scanf("%d", &n);
    v = malloc(n * sizeof(int));
    
    for (i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    
    qsort(v, n, sizeof(int), cmpfunc);
    
    mediana(v,n);
    
    return 0;
}