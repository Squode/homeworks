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
	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf("%d", &temp);
	return temp;
}
void output(double celsius)
{
	printf("���� �µ��� %.1lf�Դϴ�.", celsius);
	return;
}
