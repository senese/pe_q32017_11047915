#include <stdio.h>
#include <stdlib.h>

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
    
    a = n/2;
    if ((n%2)!=0){   // mediana é o elemento do meio
        printf("%.2f\n", (float) v[a]);
    } else {
        printf("%.2f\n", (v[a] + v[a-1])/2.0);
    }
    
    return 0;
}