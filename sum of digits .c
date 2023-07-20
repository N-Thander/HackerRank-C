#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);
    //Complete the code to calculate the sum of the five digits on n.
        
    int rem = 0, sum = 0;
    
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }    
    printf("%d", sum);
    
    return 0;
}
