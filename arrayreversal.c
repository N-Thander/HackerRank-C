#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */

    int *arr2 = (int*)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        arr2[i] = arr[num - i -1];
    }
    for (i = 0; i < num; i++)
    {
        arr[i] = arr2[i];
    }


    for(i = 0; i < num; i++)
    {
        printf("%d ", *(arr + i));
    }
    
    free(arr);
    //arr = NULL;
        
    return 0;
}
