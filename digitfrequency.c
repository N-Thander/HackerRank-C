#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1000];
    scanf("%[^\n]%*c", str);

    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,};

    for (int i = 0; i < strlen(str); i++)
    {

        switch (str[i])
        {
            case '0':
            count[0]++;
            break;
            case '1':
            count[1]++;
            break;
            case '2':
            count[2]++;
            break;
            case '3':
            count[3]++;
            break;
            case '4':
            count[4]++;
            break;
            case '5':
            count[5]++;
            break;
            case '6':
            count[6]++;
            break;
            case '7':
            count[7]++;
            break;
            case '8':
            count[8]++;
            break;
            case '9':
            count[9]++;
            break;

            default:
                break;
        }
    }
    
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", count[j]);
    }
    

    
    return 0;
}
