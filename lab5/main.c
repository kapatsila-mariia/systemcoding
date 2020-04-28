#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    float a[20]={1,3,-5,2,-7,9,-11,-2,4,0,6,7,-1,-8,0,15,-13,8,-4,-5};
    for(int i=0; i<20; i++){
        if (a[i]<0){
            k=k+1;
        }
    }


    printf("k=%d",k);
    return 0;
}
