#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double supply_voltage, resistance1, measured_voltage, resistance2;

    printf("전압 공급원의 전압 (V): ");
    scanf("%lf", &supply_voltage);

    printf("측정된 전압 (V): ");
    scanf("%lf", &measured_voltage);

    printf("R2(옴): ");
    scanf("%lf", &resistance2);

    resistance1 = (supply_voltage * resistance2) / measured_voltage - resistance2;

    printf("R1(옴): %.2lf\n", resistance1);

    return 0;
}










