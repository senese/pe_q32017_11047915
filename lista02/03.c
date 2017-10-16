#include <stdio.h>
#include <math.h>

double pi()
{
	int i;
	double pi;
    double a = 1.0;
    double b = 1/sqrt(2);
    double t = 1/4.0;
    double p = 1.0;
    double a1;
    
    for(i=1; i<=10; i++){
    	a1 = (a+b)/2;
    	b = sqrt(a*b);
    	t = t - (p*pow(a-a1, 2));
    	p = 2*p;
    	a = a1;
    }
    
    pi = (pow(a+b, 2))/(4*t);
    
    return pi;
}

int main()
{
    printf("%.20lf\n", pi());
    return 0;
}