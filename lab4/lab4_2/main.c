#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double F(double m)
{
    double b[4][6]={
        {1,2,3,4,5,6},
        {-1,3,-2,4,-5,7},
        {9,0,8,7,6,3},
        {11,-6,-9,-3,0,-6}
    };
    //double x[5]={1,5,2,7,4};
    double a=0.98,x=0;
    double c=1.1;
   // int k=1;

   // m=7;
    for(int j=1;j<m;j++)
        for(int i=0;i<5; i++){

       x=(a+pow(b[i][j],2))/c;
      }
    return x;
}


int main()
{
    int n=6;
    double a=0.98,mm=0;
    double dob,dob1;
    scanf("%lf",&mm);
    for(int i=0;i<n;i++){
             dob1=(pow(F(mm),2)+a*sqrt(F(mm)));
            }
    for(int i=0;i<n;i++)
        dob = dob1 * F(mm);

   printf("F=%f",dob);

    return 0;
}
