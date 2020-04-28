#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min=2;
    int min1;
    int i,j;
    int A[2][3]={ {1,2,3},
                  {6,5,4}
                };
    for(i=0;i<2;i++)
        for(j=0;j<3;j++){
           if(A[i][j]<min){
               min1 =A[i][j];
               printf("i=%d\t",i);
               printf("j=%d\t",j);
        }
        }


    printf("min=%d\n",min1);

    return 0;
}
