#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
    double R = 0;
    double L = 0;
    double C = 0;
    double f = 60.0;
    double V_max = 150.0;

    printf("R을 입력하시오: ");
    scanf("%lf", &R);

    printf("L을 입력하시오: ");
    scanf("%lf", &L);

    printf("C을 입력하시오: ");
    scanf("%lf", &C);

    C = C * pow(10,-6);

    double XL = 2 * PI * f * L;

    double XC = (1 / (2 * PI * f * C));

    double Z = sqrt(pow(R, 2) + pow(XL - XC, 2));

    double I_max = V_max / Z;

    double theta = atan((XL - XC) / R) * (180.0 / PI);

    double VR_max = I_max * R;

    double VL_max = I_max * XL; 

    double VC_max = I_max * XC; 

    printf("\n");
    printf("XL = %.2lf Ω\n", XL);
    printf("XC = %.2lf Ω\n", XC);
    printf("Z = %.2lf Ω\n", Z);
    printf("I_max = %.2lf A\n", I_max);
    printf("θ = %.2lf°\n", theta);
    printf("VR_max = %.2lf V\n", VR_max);
    printf("VL_max = %.2lf V\n", VL_max);
    printf("VC_max = %.2lf V\n", VC_max);

    return 0;
}