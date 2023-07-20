#include <stdio.h>

void update(int *a,int *b) 
{
    int i;
    i = *a;
    *a = *a + *b ;
    *b = i - *b ;
    if (*b < 0)
    {
        *b = (-1)*(*b);
    }     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d\n%d", &a, &b);
    
    update(pa, pb);
    
    printf("%d\n%d", a, b);

    return 0;
}
