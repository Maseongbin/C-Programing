#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
    double radian;
    double V_time;
    double I_time;
    double w;
    double frequency = 0;
    double time;
    double V_max = 0;
    double I_max = 0; 
    double capacitor;

    printf("capacitor = ");
    scanf("%lf", &capacitor);

    printf("Voltage_max = ");
    scanf("%lf", &V_max);

    printf("Intensity_of_Current_max = ");
    scanf("%lf", &I_max);

    printf("frequency = ");
    scanf("%lf", &frequency); 

    w = 2 * M_PI * frequency; 

    FILE* fp;
    fp = fopen("data.txt", "w");

    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    fprintf(fp, "time\tV_max\tI_max\n");

    for (double t = 0; t <= 100; t++)
    {
        time = t / 100; 
        V_time = V_max * sin(w * time);
        I_time = I_max * sin(w * time + M_PI / 2);

        fprintf(fp, "%.2lf\t%.2lf\t%.2lf\n", time, V_time, I_time);
    }

    printf("데이터를 저장했습니다.\n");

    fclose(fp);

    return 0;
}
