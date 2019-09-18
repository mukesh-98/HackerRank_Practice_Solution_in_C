#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int* a, b;
    char* letter[100]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(int i=a ;i<=b;i++)
    {
        if(i>9)
        {
            if(i%2==0)
            {
                printf("even\n");
            }
            else printf("odd\n");
        }
        else printf("%s\n",letter[i]);
    }
    return 0;
}
