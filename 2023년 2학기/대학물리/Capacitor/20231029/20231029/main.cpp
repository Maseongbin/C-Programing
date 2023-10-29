#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_CAPACITORS 10

int main()
{
    int option, numCapacitors;
    double capacitors[MAX_CAPACITORS] = { 0.0 };

    printf("1. 커패시터를 직렬로 연결합니다.\n");
    printf("2. 커패시터를 병렬로 연결합니다.\n\n");
    printf("어떤 연결 방식을 선택하시겠습니까? (1 또는 2 입력): ");
    scanf("%d", &option);

    if (option != 1 && option != 2)
    {
        printf("잘못된 선택입니다.\n");

        return 1;
    }

    printf("커패시터의 개수를 입력하십시오 (최대 %d개): ", MAX_CAPACITORS);
    scanf("%d", &numCapacitors);

    if (numCapacitors < 1 || numCapacitors > MAX_CAPACITORS)
    {
        printf("유효하지 않은 커패시터 개수입니다.\n");

        return 1;
    }

    for (int i = 0; i < numCapacitors; i++)
    {
        printf("커패시터 #%d의 값 (F): ", i + 1);
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

    printf("연결된 커패시터의 총 용량: %.2lf F\n", totalCapacitance);

    return 0;
}
