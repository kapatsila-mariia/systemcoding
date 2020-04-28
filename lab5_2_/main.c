#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int b=-1;
    int k=0;
    int max = -10;
    int a[20]={1,3,-5,2,-7,9,-10,-2,4,0,6,7,-1,-8,0,15,-13,8,-4,-5};

        if (a[12]==b){
            for(int i=0;i<21;i++){
            if(a[i]<max)
                max= a[i];}
            printf("max=%d", max);
}
        if (a[12] !=b){
            for(int i=0;i<21;i++){
            if(a[i]<b)
                k=k+1;

        }
    printf("k=%d",k);
        }




    return 0;
}
