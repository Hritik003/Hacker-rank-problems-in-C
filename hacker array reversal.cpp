#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,j;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }
      for(i=0,j=num-1;i<num;i++,j--)
      {
          printf("%d ",arr[j]);
      }
      
 
    /* Write the logic to reverse the array. */

    
    return 0;
}

