#include <stdio.h>

int main()
{
    int fib=1, a=1, b=0, iesimo;
    scanf("%d", &iesimo);
    
    printf("%d ", 0);
    while(iesimo > 0){
        printf("%d ", fib);
        a = b;
        b = fib;
        fib = a + b;
        
        iesimo--;
    }
    printf("\n");
    
    return 0;
}