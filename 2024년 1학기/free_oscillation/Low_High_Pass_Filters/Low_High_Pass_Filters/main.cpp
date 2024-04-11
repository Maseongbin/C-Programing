#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
    double degree;
    double radian;
    double sin_x;
    double cos_x;
    double Asin_x_Bcos_x;
    double A = 0;
    double B = 0;

    printf("A = ");
    scanf("%lf", &A);

    printf("B = ");
    scanf("%lf", &B);
    printf("\n");

    FILE* fp;
    fp = fopen("data.txt", "w");

    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    fprintf(fp, "Degree\tRadian\tsin_x\tcos_x\Asin_x_Bcos_x\n");

    for (degree = 0; degree <= 360; degree++)
    {
        radian = degree * M_PI / 180.0;

        sin_x = A * sin(100 * radian);
        cos_x = B * cos(radian);

        Asin_x_Bcos_x = sin_x + cos_x;

        fprintf(fp, "%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", degree, radian, sin_x, cos_x, Asin_x_Bcos_x);
    }

    printf("데이터를 저장했습니다.\n");

    fclose(fp);

    return 0;
}
