#include <stdio.h>
#pragma warning (disable:4996)

int input(void);

int main()
{
	int number;
	number = input();
	printf("입력된 값은 8진수로 %#o 입니다.\n입력된 값은 16진수로 %#x 입니다.", number, number);
	return 0;
}
int input(void)
{
	int input;
	printf("정수값을 입력하세요 : ");
	scanf("%d", &input);
	return input;
}