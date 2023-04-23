


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int initial_money = 50;
	int goal = 250;
	int i;
	int wins = 0;

	srand((unsigned)time(NULL));
	for (i = 0; i < 100; i++)
	{
		int cash = initial_money;
		while (cash > 0 && cash < goal)
		{
			if ((double)rand() / RAND_MAX < 0.5) cash++;
			else
				cash--;
		}
		if (cash == goal) wins++;

	}
	printf("초기 금액 $%d\n", initial_money);
	printf("목표 금액 $%d\n", goal);
	printf("100번 중에서 %d번 성공\n", wins);
	return 0;

}








/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void)
{
	int x, y, answer, i;
	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)
	{
		x = rand() % 10;
		y = rand() % 10;
		printf("%d + %d =", x, y);
		scanf("%d", &answer);
		if (x + y == answer)
			printf("맞앗습니다.\n");
		else
			printf("틀렸습니다.\n");
	}
	return 0;

}
*/




/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(void)
{
	int i, years;
	double total, rate, investment;

	printf("원금: ");
	scanf("%lf", &investment);
	printf("이율(%%): ");
	scanf("%lf", &rate);
	printf("기간(년): ");
	scanf("%lf", &years);

	printf("========================\n");
	printf("연도 원리금\n");
	printf("========================\n");
	total = investment;
	rate /= 100.0;
	for (i = 0; i < years; i++)
	{
		total = total * (1 + rate);
		printf("%2d  %10.1f\n", i+1, total);

	}
	return 0;

}
*/





/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(void)
{
	double divisor, divident, sum;
	int loop_count;

	divisor = 1.0;
	divident = 4.0;
	sum = 0.0;
	printf("반복횟수: ");
	scanf("%d", &loop_count);

	while (loop_count > 0)
	{
		sum = sum + divident / divisor;
		divident = -1.0 * divident;
		divisor = divisor + 2;
		loop_count--;

	}
	printf("파이값 = %f\n", sum);

	return 0;
	
}
*/






/*
//소문자를 대문자로 변경한다.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(void)
{
	char letter;

	while (1)
	{
		printf("소문자를 입력하시오: ");
		scanf("%c", &letter);

		if (letter == 'Q')
			break;
		if (letter < 'a' || letter > 'z')
			continue;

		letter -= 32;
		printf("변환된 대문자는 %c입니다.\n", letter);
	}
	return 0;
}
*/





/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		
		if (i%3 == 0)
			continue;
			printf("%d", i);
	}


	return 0;
}
*/




/*
//break를 이용하여 무한루프를 탈출한다.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(void)
{

	double v;

	while (1)
	{

		printf("실수값을 입력하시오: ");
		scanf("%lf", &v);

		if (v < 0.0)
			break;

		printf("%f의 제곱근은 %f입니다.\n", v, sqrt(v));
	}
	return 0;
}
*/






/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SEED_MONEY 1000000


int main(void)
{
	int year = 0, money = SEED_MONEY;

	while (1)
	{
		year++;
		money = money * (1 + 0.30);
		if (money > 10 * SEED_MONEY)
			break;

	}
	printf("%d년\n", year);

	return 0;
}
*/





/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a, b, c;
	for (a = 1; a <= 100; a++) {
		for (b = 1; b <= 100; b++) {
			for(c = 1; c <= 100; c++) {
			if ((a * a + b * b) == c * c)
				printf("%d %d %d\n", a, b, c);
		    }
		}
	}
	return 0;
}
*/






/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int x, y;

	for(y = 0; y <= 5; y++)
	{
		for (x = 0; x < y; x++)
			printf("*");


		printf("\n");
	}
	return 0;
}
*/




/*
//중첩 for문을 이용하여 *기호를 사각형 모양으로 출력하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int x, y;

	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 10; x++)
			printf("*");
		printf("\n");
	}
	return 0;
}
*/





/*
//반복문을 이용한 팩토리얼 구하기
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	long fact = 1;
	int i, n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		fact = fact * i;

	printf("%d!은 %d입니다.\n", n, fact);

	return 0;
}
*/






/*
//반복문을 이용한 네모 그리기
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	printf("************\n");
	for (int i = 0; i < 5; i++)
		printf("*          *\n");

	printf("************\n");

	return 0;
}
*/





/*
//반복을 이용한 세제곱값 구하기
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int n;

	printf("정수를 입력하시오:");
	scanf("%d", &n);

	printf("=======================\n");
	printf("    i          i의 세제곱\n");
	printf("=======================\n");
	for (int i = 1; i <= n; i++)
		printf("%5d      %5d\n", i, i * i * i);

	return 0;
}
*/





/*
//반복을 이용한 정수합 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int sum = 0;

	for (int i = 1; i <= 10; i++)
		sum += i;

	printf("1부터 10까지의 정수의 합=%d\n", sum);

	return 0;
}
*/





/*
//"Hello World!" 5번 출력하기
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int i;
	for (i = 0; i < 5; i++)
		printf("Hello World!\n");

	return 0;
}
*/





/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	srand((unsigned)time(NULL));

	int answer = rand() % 100 + 1;
	int guess;
	int tries = 0;
	do {
		printf("정답을 추측하여 보시오:");
		scanf("%d", &guess);
		tries ++;

		if (guess > answer)
			printf("HIGH\n");
		if (guess < answer)
			printf("LOW\n");
	} while (guess != answer);

	printf("축하합니다. 시도횟수=%d\n");

	return 0;

}
*/







/*
//do, while 문을 이용한 메뉴
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int i = 0;

	do
	{
		printf("1---새로만들기\n");
		printf("2---파일열기\n");
		printf("3---파일닫기\n");
		printf("하나를 선택하시오: ");
		scanf("%d", &i);
	} while (i < 1 || i>3);
	printf("선택된 메뉴=%d\n", i);

	return 0;

}
*/





/*
//사용자가 0을 입력할 때까지 숫자를 더한다.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{

	int number, sum = 0;

	do
	{
		printf("정수를 입력하시오: ");
		scanf("%d", &number);
		sum += number;

	} while (number != 0);  
	printf("숫자들의 합 = %d\n", sum);
	return 0;
}
*/






/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int halflife;
	double initial;
	double current;
	int years = 0;

	printf("반감기를 입력하시오(년): ");
	scanf("%d", &halflife);

	initial = 100.0;
	current = initial;
	while (current > initial / 10.0)
	{
		years += halflife;
		current = current / 2.0;
		printf("%d년 후에 남은 양=%f\n", years, current);
	}
	printf("1/10 이하로 되기까지 걸린 시간=%d년\n");

	return 0;


}
*/






/*
//while 문을 이용한 최대 공약수 구하기 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int x, y, r;

	printf("두 개의 정수를 입력하시오(큰수, 작은수):");
	scanf("%d%d", &x, &y);

	while (y != 0)
	{

		r = x % y;
		x = y;
		y = r;

	}
	printf("최대 공약수는 %d입니다.\n", x);

	return 0;
}
*/






/*
//while 문을 이용한 성적 평균 구하기 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int grade, n;
	double sum, average;

	n = 0;
	sum = 0;
	grade = 0;

	printf("종료하려면 음수를 입력하시오\n");

	while (grade >= 0)
	{

		printf("성적을 입력하시오:");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade;
	n--;

	average = sum / n;
	printf("성적의 평균은 %f입니다.\n", average);

	return 0;
}
*/




/*
#include<stdio.h>

int main(void)
{

	int i = 3;

	while (i)
	{
		printf("%d은 참입니다.\n", i);
		i--;
	}
	printf("%d은 거짓입니다.\n", i);

	return 0;
}
*/





/*
//while 문을 이용한 합계 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int i, n, sum;

	i = 0;
	sum = 0;
	while (i < 5)
	{
		printf("값을 입력하시오: ");
		scanf("%d", &n);
		sum = sum + n;
		i++;
	}
	printf("합계를 %d입니다.\n", sum);

	return 0;
}
*/





/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int i, n, sum;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	i = 0;
	sum = 0;

	while (i <= n)
	{

		sum += i;
		i = i + 2;

	}

	printf("1부터 %d까지의 합은 %d입니다\n", n, sum);
	return 0;
}
*/






/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int i, n, sum;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n)
	{

		sum += i;
		i++;

	}

	printf("1부터 %d까지의 합은 %d입니다\n", n, sum);
	return 0;
}
*/






/*
//while 문을 이용한 제곱값 출력 프로그램
#include<stdio.h>

int main(void)
{

	int n;

	printf("================================\n");
	printf("    n          n의 제곱\n");
	printf("================================\n");

	n = 1;
	while (n <= 10)
	{

		printf("%5d      %5d\n", n, n * n);
		n++;
	}

	return 0;


}
*/






/*
//while 문을 이용한 구구단 출력 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int n;
	int i = 1;

	printf("출력하고 싶은 단: ");
	scanf("%d", &n);

	while (i <= 9)
	{
		printf("%d*%d = %d\n", n, i, n * i);
		i++;
	}

	return 0;
}
*/





/*
//Hello World 5번 출력 프로그램
#include<stdio.h>
int main(void)
{

	int i = 0;

	while (i < 5)
	{
		printf("Hello World!\n");
		i++;
	}


	return 0;
}
*/