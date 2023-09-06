#include <stdio.h>

int main()
{
    int temp, x = 3, y = 7;

    printf("Before : x = %d, y = %d\n", x, y);

    temp = x;  
    x = y;        
    y = temp;     

    printf("After  : x = %d, y = %d\n", x, y);

    return 0;
}