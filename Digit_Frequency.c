#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

    char *s;
    int a[10]={0,0,0,0,0,0,0,0,0};
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
   for(int i=0;i<strlen(s);i++){
   if(s[i]>='0' && s[i]<='9')
   {
       a[(int)(s[i]-'0')]++;
   }
   }

   for(int i=0;i<10;i++)
   {
       printf("%d ",a[i]);
   }

    free(s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0; 

}
