#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_21(int solution, int answer) //한라대학교 미래모빌리티공학과 마성빈
{
    srand(time(NULL)); 

    double Ax = 3.00 +rand() % (5 + 1) - 1;
    double Ay = 45.0 +rand() % (10 + 1) - 2;
    double Bx = 6.00 +rand() % (5 + 1) - 1;
    double By = -60.0 +rand() % (10 + 1) - 2;
    double x1, x2, y1, y2; 
    double distance;

    printf("%5.2lf\n", Ax);
    printf("%5.2lf\n", Ay);
    printf("%5.2lf\n", Bx);
    printf("%5.2lf\n", By);

    x1 = Ax * cos(DEG2RAD(Ay));
    y1 = Ax * sin(DEG2RAD(Ay));
    x2 = Bx * cos(DEG2RAD(By));
    y2 = Bx * sin(DEG2RAD(By));

    

    printf("\n\n");
    printf("2 - 21\n");
    printf("극좌표계에서 (r, θ) = (3.00m, 45.0°)와 (6.00m, -60.0°)이다.\n");
    printf("두 점 사이의 거리를 구하라.\n");
 
    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");

        printf("두 점 사이의 거리를 구하라.\n\n");

        printf("관련 공식은  AB = √((x1 - x2)^2 + (y1 - y2)^2)\n");
        printf("AB: A점과 B점 사이의 거리, x1: 점A의 x좌표, x2: 점B의 x좌표, y1: 점A의 y좌표, y2: 점B의 y좌표\n\n");
        
        printf("A(%5.2lfm , %5.2lf°)\n", Ax, Ay);
        printf(" = (r * cosθ, r * sinθ)\n");
        printf(" = (%5.2lfm * cos(%5.2lf°), %5.2lfm * sin(%5.2lf°))\n", Ax, Ay, Ax, Ay);
        printf(" = (%5.2lf, %5.2lf)\n\n", x1, y1);

        printf("B(%5.2lfm , %5.2lf°)\n", Bx, By);
        printf(" = (r * cosθ, r * sinθ)\n");
        printf(" = (%5.2lfm * cos(%5.2lf°), %5.2lfm * sin(%5.2lf°))\n", Bx, By, Bx, By);
        printf(" = (%5.2lf, %5.2lf)\n\n", x2, y2);
        
        printf("D = √((x1 - x2)^2 + (y1 - y2)^2)\n");
        printf("  = √((%5.2lf - %5.2lf)^2 + (%5.2lf - %5.2lf)^2)\n", x1, x2, y1, y2);
        distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); 
        printf("  = %5.2lf\n\n", distance);
    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("두 점 사이의 거리: %5.2lfm\n\n", distance);
    }
}

int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("========================= MSC Contest  ==========================\n");
    printf("========================   Chapter 2     ========================\n");
    printf("=================================================================\n");

    Excersize_2_21(1, 1);
}