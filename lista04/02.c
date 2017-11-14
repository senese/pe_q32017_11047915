#include <stdio.h>

typedef struct Cronometro {
    int m, s, d;
} Cronometro;

Cronometro diferenca(Cronometro c1, Cronometro c2)
{
    Cronometro c3;
    
    if (c2.d > c1.d) {
        c1.d += 100;
        c1.s -= 1;
    }
    
    if (c2.s > c1.s) {
        c1.s += 60;
        c1.m -= 1;
    }
    
    c3.m = c1.m - c2.m;
    c3.s = c1.s - c2.s;
    c3.d = c1.d - c2.d;
    
    return c3;
}

int main()
{
    Cronometro c1, c2, c3;
    scanf("%dm %ds %d", &c1.m, &c1.s, &c1.d);
    scanf("%dm %ds %d", &c2.m, &c2.s, &c2.d);
    
    c3 = diferenca(c1, c2);
    
    printf("%dm %ds %d\n", c3.m, c3.s, c3.d);
    
    return 0;
}