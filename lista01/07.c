#include <stdio.h>

int main()
{
    int resp, x, y;
    scanf("%d%d", &x, &y);
    resp = x;
    
    while(y > 1){
        resp *= x;
        y--;
    }
    
    if (y == 0)
        resp = 1;
    
    printf("%d\n", resp);
    
    return 0;
}