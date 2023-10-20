#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    int num;
    printf("띄의 개수를 입력하세요 (4 또는 5): ");
    scanf("%d", &num);

    if (num == 4)
    {
        double color1, color2, color3, color4;
        double ohm = 0;
        double ans = 1;
        double tol = 0;

        printf("흑색: 0, 갈색: 1, 적색: 2, 등색; 3, 황색: 4, 녹색: 5, 청색: 6, 자색: 7, 회색: 8, 백색: 9, 금색: 10, 은색: 11\n");
        printf("첫 번째 띠의 색깔을 입력하세요: ");
        scanf("%lf", &color1);
        printf("두 번째 띠의 색깔을 입력하세요: ");
        scanf("%lf", &color2);
        printf("세 번째 띠의 색깔을 입력하세요: ");
        scanf("%lf", &color3);
        printf("네 번째 띠의 색깔을 입력하세요 (1: 갈색, 2: 빨간색, 5: 초록색, 6: 파란색, 7: 보라색, 8: 회색, 10: 금색, 11: 은색): ");
        scanf("%lf", &color4);

        for (int i = 0; i < color3; i++)
        {
            ans *= 10;
        }

        switch ((int)color4)
        {
        case 1:
            tol = 1;
            break;
        case 2:
            tol = 2;
            break;
        case 5:
            tol = 0.5;
            break;
        case 6:
            tol = 0.25;
            break;
        case 7:
            tol = 0.1;
            break;
        case 8:
            tol = 0.05;
            break;
        case 10:
            tol = 5;
            break;
        case 11:
            tol = 10;
            break;
        default:
            printf("유효하지 않은 오차 값입니다.\n");
            return 1;
        }

        ohm = (color1 * 10 + color2) * ans;

        if (ohm >= 1 && ohm < 1000)
        {
            printf("저항값 = %.1lfΩ, 오차 = ±%.1lf%%\n", ohm, tol);
        }
        else if (ohm >= 1000 && ohm < 1000000)
        {
            ohm /= 1000;
            printf("저항값 = %.1lfKΩ, 오차 = ±%.1lf%%\n", ohm, tol);
        }
        else if (ohm >= 1000000 && ohm < 1000000000)
        {
            ohm /= 1000000;
            printf("저항값 = %.1lfMΩ, 오차 = ±%.1lf%%\n", ohm, tol);
        }
        else
        {
            ohm /= 1000000000;
            printf("저항값 = %.1lfGΩ, 오차 = ±%.1lf%%\n", ohm, tol);
        }
    }
    else if (num == 5)
    {
        double color1, color2, color3, color4, color5;
        double ohm = 0;
        double ans = 1;
        double tol = 0;

        printf("흑색: 0, 갈색: 1, 적색: 2, 등색: 3, 황색: 4, 녹색: 5, 청색: 6, 자색: 7, 회색: 8, 백색: 9, 금색: 10, 은색: 11\n");
        printf("첫 번째 띠의 색깔을 입력하세요: ");
        scanf("%lf", &color1);
        printf("두 번째 띠의 색깔을 입력하세요: ");
        scanf("%lf", &color2);
        printf("세 번째 띠의 색깔을 입력하세요: ");
        scanf("%lf", &color3);
        printf("네 번째 띠의 색깔을 입력하세요: ");
        scanf("%lf", &color4);
        printf("다섯 번째 띠의 색깔을 입력하세요 (10: 금색, 11: 은색): ");
        scanf("%lf", &color5);

        for (int i = 0; i < color3; i++)
        {
            ans *= 10;
        }

        switch ((int)color5)
        {
        case 10:
            tol = 5;
            break;
        case 11:
            tol = 10;
            break;
        default:
            printf("유효하지 않은 온도 계수 값입니다.\n");
            return 1;
        }

        ohm = (color1 * 100 + color2 * 10 + color3) * ans;

        if (ohm >= 1 && ohm < 1000)
        {
            printf("저항값 = %.1lfΩ, 오차 = ±%.1lf%%\n", ohm, tol);
        }
        else if (ohm >= 1000 && ohm < 1000000)
        {
            ohm /= 1000;
            printf("저항값 = %.1lfKΩ, 오차 = ±%.1lf%%\n", ohm, tol);
        }
        else if (ohm >= 1000000 && ohm < 1000000000)
        {
            ohm /= 1000000;
            printf("저항값 = %.1lfMΩ, 오차 = ±%.1lf%%\n", ohm, tol);
        }
        else
        {
            ohm /= 1000000000;
            printf("저항값 = %.1lfGΩ, 오차 = ±%.1lf%%\n", ohm, tol);
        }
    }
    else
    {
        printf("올바른 숫자를 입력하세요.\n");
    }

    return 0;
}