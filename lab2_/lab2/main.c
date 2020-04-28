#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    double A,C,x,y;
    C=1.231;
    x=7.486;
    y=6.521;
    if(x<y){
        A=C*exp(x*y)+log10(x);
    }
        else
    {
           A=tan(x*y)+C* pow(y,2);

    }
    printf("A=%f",A);
    return 0;
}
