#include <stdio.h>
#include <math.h>

float soma(float x, float y)
{
    return x+y;
}

float subtracao(float x, float y)
{
    return x-y;
}

float mult(float x, float y)
{
    return x*y;
}

float div(float x, float y)
{
    if (y == 0){
        printf("Não é permitido divisão por zero. Insira um número diferente: ");
        scanf("%f", &y);
    }
    return x/y;
}

float pot(float x, float y)
{
    return pow(x,y);
}

int main()
{
    int op;
    float r, x, y;
    scanf("%d%f%f", &op, &x, &y);
    
    switch(op){
        case 1:
            r = soma(x,y);
            break;
        case 2:
            r = subtracao(x,y);
            break;
        case 3:
            r = mult(x,y);
            break;
        case 4:
            r = div(x,y);
            break;
        case 5:
            r = pot(x,y);
            break;
    }
    
    printf("%.0f\n", r);
    return 0;
}