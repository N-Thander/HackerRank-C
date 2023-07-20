#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c", &ch);
    char s[20];
    scanf("%s", &s);
    scanf("\n");
    char sen[50];
    scanf("%[^\n]%*c", &sen);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    scanf("\n");
    printf("%s", sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
