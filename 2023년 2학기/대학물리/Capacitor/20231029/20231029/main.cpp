#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_CAPACITORS 10

int main()
{
    int option, numCapacitors;
    double capacitors[MAX_CAPACITORS] = { 0.0 };

    printf("1. Ŀ�н��͸� ���ķ� �����մϴ�.\n");
    printf("2. Ŀ�н��͸� ���ķ� �����մϴ�.\n\n");
    printf("� ���� ����� �����Ͻðڽ��ϱ�? (1 �Ǵ� 2 �Է�): ");
    scanf("%d", &option);

    if (option != 1 && option != 2)
    {
        printf("�߸��� �����Դϴ�.\n");

        return 1;
    }

    printf("Ŀ�н����� ������ �Է��Ͻʽÿ� (�ִ� %d��): ", MAX_CAPACITORS);
    scanf("%d", &numCapacitors);

    if (numCapacitors < 1 || numCapacitors > MAX_CAPACITORS)
    {
        printf("��ȿ���� ���� Ŀ�н��� �����Դϴ�.\n");

        return 1;
    }

    for (int i = 0; i < numCapacitors; i++)
    {
        printf("Ŀ�н��� #%d�� �� (F): ", i + 1);
        scanf("%lf", &capacitors[i]);
    }

    double totalCapacitance;

    if (option == 1)
    {
        totalCapacitance = 0.0;
        for (int i = 0; i < numCapacitors; i++)
        {
            totalCapacitance += 1.0 / capacitors[i];
        }
        totalCapacitance = 1.0 / totalCapacitance;
    }
    else if (option == 2)
    {
        totalCapacitance = 0.0;
        for (int i = 0; i < numCapacitors; i++)
        {
            totalCapacitance += capacitors[i];
        }
    }

    printf("����� Ŀ�н����� �� �뷮: %.2lf F\n", totalCapacitance);

    return 0;
}
