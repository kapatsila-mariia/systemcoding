#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double F(double m)
{
    double a=1.03;
    m=1.1;

    double p=sin(a*m)+tan(m);
        //printf("p=%f",p);
        return p;
}

int main()
{
    double x=0.57;
    double y=0.98;
    double z=0.26;
    double fun= tan(F(x))+pow(sin(F(y)),2)/cos(F(z));
    //double fun=tan(F(x))+pow(sin (F(y)),2)/cos(F(z));
    printf("F=%f",fun);
        return 0;
}
