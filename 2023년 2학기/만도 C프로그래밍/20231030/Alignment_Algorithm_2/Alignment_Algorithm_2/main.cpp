#include <stdio.h>
#include <stdlib.h> 

int compare(const void* a, const void* b)  
{
    int num1 = *(int*)a;    
    int num2 = *(int*)b;    

    if (num1 < num2)   
        return -1;     

    if (num1 > num2)   
        return 1;    

    return 0;   
}

int main()
{
    int numArr[10] = { 8, 4, 22, 15, 3, 7, 106, 1, 6, 9 };   

    qsort(numArr, sizeof(numArr) / sizeof(int), sizeof(int), compare);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numArr[i]);   
    }

    printf("\n");

    return 0;
}