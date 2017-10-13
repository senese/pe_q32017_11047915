#include <stdio.h>

float volume(float l, float c, float a)
{
    float v = l*c*a;
    return v;
}

int main()
{
    float l, c, a;
    scanf("%f %f %f", &l, &c, &a);
    printf("%.2f\n", volume(l, c, a));
    
    return 0;
}