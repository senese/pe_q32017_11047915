#include <stdio.h>
#include <math.h>

typedef struct Coordenadas {
    float x, y, z;
} Coordenadas;

float distancia(Coordenadas p1, Coordenadas p2)
{
    float d, x, y, z;
    
    x = p1.x - p2.x;
    x = pow(x, 2);
    y = p1.y - p2.y;
    y = pow(y, 2);
    z = p1.z - p2.z;
    z = pow(z, 2);
    d = x + y + z;
    d = sqrt(d);
    
    return d;
}

int main()
{
    Coordenadas p1, p2;
    scanf("%f %f %f", &p1.x, &p1.y, &p1.z);
    scanf("%f %f %f", &p2.x, &p2.y, &p2.z);
    
    printf("%.2f\n", distancia(p1, p2));
    
    return 0;
}