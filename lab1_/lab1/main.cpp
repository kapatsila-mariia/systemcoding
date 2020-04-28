#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {      /* Âàð³àíò 19 */
    double d,l,w,v;
    l=0.11;
    v=4.86;
    d=4*l - log10(l+5*pow(v,2)) - (2+v)/sqrt(3*l+1)+3;

    w= v-sin(pow(l,2)+4*v)+exp(21);
    printf("d=%f\n",d);
    printf("w=%f",w);
    return 0;
}
