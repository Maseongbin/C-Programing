#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    int num;
    printf("���� ������ �Է��ϼ��� (4 �Ǵ� 5): ");
    scanf("%d", &num);

    if (num == 4)
    {
        double color1, color2, color3, color4;
        double ohm = 0;
        double ans = 1;
        double tol = 0;

        printf("���: 0, ����: 1, ����: 2, ���; 3, Ȳ��: 4, ���: 5, û��: 6, �ڻ�: 7, ȸ��: 8, ���: 9, �ݻ�: 10, ����: 11\n");
        printf("ù ��° ���� ������ �Է��ϼ���: ");
        scanf("%lf", &color1);
        printf("�� ��° ���� ������ �Է��ϼ���: ");
        scanf("%lf", &color2);
        printf("�� ��° ���� ������ �Է��ϼ���: ");
        scanf("%lf", &color3);
        printf("�� ��° ���� ������ �Է��ϼ��� (1: ����, 2: ������, 5: �ʷϻ�, 6: �Ķ���, 7: �����, 8: ȸ��, 10: �ݻ�, 11: ����): ");
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
            printf("��ȿ���� ���� ���� ���Դϴ�.\n");
            return 1;
        }

        ohm = (color1 * 10 + color2) * ans;

        if (ohm >= 1 && ohm < 1000)
        {
            printf("���װ� = %.1lf��, ���� = ��%.1lf%%\n", ohm, tol);
        }
        else if (ohm >= 1000 && ohm < 1000000)
        {
            ohm /= 1000;
            printf("���װ� = %.1lfK��, ���� = ��%.1lf%%\n", ohm, tol);
        }
        else if (ohm >= 1000000 && ohm < 1000000000)
        {
            ohm /= 1000000;
            printf("���װ� = %.1lfM��, ���� = ��%.1lf%%\n", ohm, tol);
        }
        else
        {
            ohm /= 1000000000;
            printf("���װ� = %.1lfG��, ���� = ��%.1lf%%\n", ohm, tol);
        }
    }
    else if (num == 5)
    {
        double color1, color2, color3, color4, color5;
        double ohm = 0;
        double ans = 1;
        double tol = 0;

        printf("���: 0, ����: 1, ����: 2, ���: 3, Ȳ��: 4, ���: 5, û��: 6, �ڻ�: 7, ȸ��: 8, ���: 9, �ݻ�: 10, ����: 11\n");
        printf("ù ��° ���� ������ �Է��ϼ���: ");
        scanf("%lf", &color1);
        printf("�� ��° ���� ������ �Է��ϼ���: ");
        scanf("%lf", &color2);
        printf("�� ��° ���� ������ �Է��ϼ���: ");
        scanf("%lf", &color3);
        printf("�� ��° ���� ������ �Է��ϼ���: ");
        scanf("%lf", &color4);
        printf("�ټ� ��° ���� ������ �Է��ϼ��� (10: �ݻ�, 11: ����): ");
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
            printf("��ȿ���� ���� �µ� ��� ���Դϴ�.\n");
            return 1;
        }

        ohm = (color1 * 100 + color2 * 10 + color3) * ans;

        if (ohm >= 1 && ohm < 1000)
        {
            printf("���װ� = %.1lf��, ���� = ��%.1lf%%\n", ohm, tol);
        }
        else if (ohm >= 1000 && ohm < 1000000)
        {
            ohm /= 1000;
            printf("���װ� = %.1lfK��, ���� = ��%.1lf%%\n", ohm, tol);
        }
        else if (ohm >= 1000000 && ohm < 1000000000)
        {
            ohm /= 1000000;
            printf("���װ� = %.1lfM��, ���� = ��%.1lf%%\n", ohm, tol);
        }
        else
        {
            ohm /= 1000000000;
            printf("���װ� = %.1lfG��, ���� = ��%.1lf%%\n", ohm, tol);
        }
    }
    else
    {
        printf("�ùٸ� ���ڸ� �Է��ϼ���.\n");
    }

    return 0;
}