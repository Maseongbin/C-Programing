#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int money, int price, int n) 
{
    int answer = 0;
    int empty_bottle = answer = money / price;

    while (n <= empty_bottle) 
    {
        empty_bottle = empty_bottle - n;
        answer++;
        empty_bottle++;
    }

    return answer;
}

int main() 
{
    int money1 = 8;
    int price1 = 2;
    int n1 = 4;
    int ret1 = solution(money1, price1, n1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int money2 = 6;
    int price2 = 2;
    int n2 = 2;
    int ret2 = solution(money2, price2, n2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}