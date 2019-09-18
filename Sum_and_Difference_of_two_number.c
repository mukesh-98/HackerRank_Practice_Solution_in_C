#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main( )
{
int x,y, sum , diff;
float a,b,s,d;
    scanf("%d %d",&x,&y);
    scanf("\n");
     scanf("%f %f",&a,&b);
    sum=x+y;
    s=a+b;
    diff=x-y;
    d=a-b;
    
 
 
    printf("%d %d\n",sum,diff);

printf("%0.1f %0.1f",s,d);
       
    return 0;
}

