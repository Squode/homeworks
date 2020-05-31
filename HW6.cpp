#include <stdio.h>
#pragma warning (disable:4996)

int input(void);
void output(double);

int main()
{
	int temp = input();
	double celsius = 5.0 / 9 * ((double)temp - 32);
	output(celsius);
	return 0;
}

int input(void)
{
	int temp;
	printf("화씨 온도를 입력하세요 : ");
	scanf("%d", &temp);
	return temp;
}
void output(double celsius)
{
	printf("섭씨 온도는 %.1lf입니다.", celsius);
	return;
}
