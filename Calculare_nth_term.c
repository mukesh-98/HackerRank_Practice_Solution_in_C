#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  int sum;
  for(int i=0;i<=n;i++){
      sum= sum+a+b+c;
      if(i>3)
      {
          a=b;
          b=c;
          c=sum;
          sum=sum+a+b+c;
      }
  }
  return sum;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

 
    printf("%d", ans); 
    return 0;
}

