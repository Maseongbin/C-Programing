#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double reference;

int compare(const void* a, const void* b) 
{
    double num1 = *(double*)a;
    double num2 = *(double*)b;

    double diff1 = fabs(num1 - reference);
    double diff2 = fabs(num2 - reference);

    if (diff1 < diff2)
    {
        return -1;
    }
    if (diff1 > diff2)
    {
        return 1;
    }
    return 0;
}

int main() 
{
    printf("���� ���� �Է��Ͻÿ�: ");
    scanf("%lf", &reference);

    double numbers[15];
    FILE* inputFile;
    FILE* outputFile;

    
    inputFile = fopen("input_number.txt", "r");
    if (inputFile == NULL) {
        printf("�Է� ������ �� �� �����ϴ�.\n");
        return 1;
    }

    for (int i = 0; i < 15; i++) {
        if (fscanf(inputFile, "%lf", &numbers[i]) != 1) {
            printf("�Է� ���Ͽ� ������ �����Ͱ� �ֽ��ϴ�.\n");
            fclose(inputFile);
            return 1;
        }
    }

    fclose(inputFile);
    qsort(numbers, 15, sizeof(double), compare);

    
    outputFile = fopen("output_number.txt", "w");

    if (outputFile == NULL) 
    {
        printf("��� ������ �� �� �����ϴ�.\n");
        return 1;
    }

    printf("���� ������ ������ ��: ");

    for (int i = 0; i < 15; i++) 
    {
        printf("%.0lf ", numbers[i]);
        fprintf(outputFile, "%.0lf\n", numbers[i]);
    }

    printf("\n");
    fclose(outputFile);
    
    return 0;
}