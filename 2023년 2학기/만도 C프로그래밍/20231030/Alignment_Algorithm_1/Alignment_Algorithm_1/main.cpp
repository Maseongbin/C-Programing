#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubble_sort(int arr[], int count)
{
    int temp;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int numArr[10];
    FILE* file = fopen("num1.txt", "r");

    for (int i = 0; i < 10; i++)
    {
        fscanf(file, "%d", &numArr[i]);
    }

    fclose(file);

    bubble_sort(numArr, sizeof(numArr) / sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numArr[i]);
    }

    printf("\n");

    return 0;
}