#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double y,x,a,b;
    a=0.98;
    b=0.98;
    x=0.91;
    y=(tanh(x*a)/exp(1.2)*acos(x))+(log10(b*x)+a)/pow(x+b*pow(a,2),0.2);
    printf("y=%f",y);
    return 0;
}
