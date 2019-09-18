#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,count=0;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    int temp[num];
    for(i =0; i <num; i++) {
        scanf("%d", arr + i);
        temp[i]=*(arr+i);
       }
        

    /* Write the logic to reverse the array. */
    
    for(i = num-1; i>=0; i--){
       printf("%d ", temp[i]);
    }
    free(arr);
    return 0;
}

