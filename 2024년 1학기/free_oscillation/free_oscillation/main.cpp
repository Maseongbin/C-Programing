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
    double w0;
    double m = 0;
    double k = 0;
    double A = 0;
    double B = 0;

    printf("A = ");
    scanf("%lf", &A);

    printf("B = ");
    scanf("%lf", &B);
    printf("\n");

    printf("용수철 상수(spring constant): ");
    scanf("%lf", &k);
    
    printf("질량(mass): ");
    scanf("%lf", &m);
    printf("\n");

    w0 = sqrt(k / m);
    printf("w0 = √(k/m)\n");
    printf("   = %lf\n\n", w0);

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

        sin_x = sin(w0 * radian);
        cos_x = cos(w0 * radian);

        Asin_x_Bcos_x = (A * sin_x) + (B * cos_x);

        fprintf(fp, "%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", degree, radian, sin_x, cos_x, Asin_x_Bcos_x);
    }

    printf("데이터를 저장했습니다.\n");

    fclose(fp);

    return 0;
}
