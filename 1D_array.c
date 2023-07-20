#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n; //no of elements of the array 
    scanf("%d", &n);
    // taking array elements
    int arr[n];
    for (int i=0; i< n; i++) {
    scanf("%d ", &arr[i]);
    }    
    //sum of the elements of the array
    int sum = 0;
    for (int i=0; i< n; i++) {
    sum = sum + arr[i];
    }
    
    printf("%d", sum);   
    return 0;
}
