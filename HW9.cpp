#include <stdio.h>
#pragma warning (disable:4996)

int input(void);

int main()
{
	int number;
	number = input();
	printf("�Էµ� ���� 8������ %#o �Դϴ�.\n�Էµ� ���� 16������ %#x �Դϴ�.", number, number);
	return 0;
}
int input(void)
{
	int input;
	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &input);
	return input;
}