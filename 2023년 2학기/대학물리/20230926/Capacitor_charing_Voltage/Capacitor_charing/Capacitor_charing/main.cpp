#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() 
{
    double C, V, R;

    printf("C= ");
    scanf("%lf", &C);

    printf("V= ");
    scanf("%lf", &V);

    printf("R= ");
    scanf("%lf", &R);

    FILE* file = fopen("Capacitor_charging.csv", "w");

    fprintf(file, "Time, Charge, Current\n");

    for (double i = 0.0; i <= 10.0; i += 0.1) 
    {
        double Q = C * V * (1 - exp(-i / (R * C)));
        double I = (V / R) * exp(-i / (R * C));
        fprintf(file, "%.2lf, %.2lf, %.2lf\n", i, Q, I);
    }
    fclose(file);
}