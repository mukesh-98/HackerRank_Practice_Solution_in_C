#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
    char w[100];
    char se[100];
    scanf("%s",&c);
    scanf("\n");
    scanf("%s",w);
    scanf("\n"); 
    scanf("%[^\n]",se);

    printf("%c\n",c);
    printf("%s\n",w);
    printf("%s",se);
 
    return 0;

}

