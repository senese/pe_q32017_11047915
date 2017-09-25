#include <stdio.h>

int main()
{
    int x, y, div;
    
    scanf("%d%d", &x, &y);
    if (y == 0){
        while (y == 0){
            printf("A divisão por zero não é permitida, insira outro valor para y: ");
            scanf("%d", &y);
        }
    }
    
    div = x/y;
    
    printf("A divisão inteira é: %d\n", div);
    
    return 0;
}