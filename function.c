#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int x, int y, int z, int w)
{
    int ans;
    if (x > y && x > z && x>w)
    {
        ans = x;
    }
    else if (y > x && y > z && y > w)
    {
        ans = y;
    }
    else if (z > x && z > y && z > w)
    {
        ans = z;
    }
    else if (w > x && w > y && w > z)
    {
        ans = w;
    }
    else
    {
        ans = x;
    }
    return ans;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
