#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
 int a,o,e,maxx=0,maxy=0,maxz=0;
 
 for(int i=1;i<=n;i++){
     for(int j=i+1;j<=n;j++){  
        a= i&j;o= i|j;e= i^j;
        if(a<k && a>maxx){
            maxx=a;
        }
        if(o<k && o>maxy){
            maxy=o;
        } 
        if(e<k && e>maxz){
            maxz=e;
        }    
     }

 }
 printf("%d\n%d\n%d\n",maxx,maxy,maxz);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
