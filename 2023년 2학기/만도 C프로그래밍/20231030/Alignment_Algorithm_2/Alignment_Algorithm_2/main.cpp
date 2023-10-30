#define _CRT_SECURE_NO_WARNINGS
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
    int numArr[10];
    FILE* file = fopen("num2.txt", "r"); 

    if (file == NULL) 
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) 
    {
        fscanf(file, "%d", &numArr[i]);
    }

    fclose(file);

    qsort(numArr, sizeof(numArr) / sizeof(int), sizeof(int), compare);

    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", numArr[i]);
    }
    printf("\n");

    return 0;
}