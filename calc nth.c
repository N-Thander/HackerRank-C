#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c)
{
    int S;
    for (int i = n; i < n; i++)
    {
        S = a + b + c;
        a = b;
        b = c;
        c = S;
    }
    return S;   
}

int main() {
    int n, a, b, c;
  
    scanf("%d\n%d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
