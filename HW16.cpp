#include <stdio.h>
#pragma warning (disable:4996)

int input(void);
int calcFee(int);
void output(int);

int main()
{
	int num, fee;
	num = input();
	fee = calcFee(num);
	output(fee);
	return 0;
}
int input(void)
{
	int num;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	return num;
}
int calcFee(int num)
{
	int fee;
	if (num > 5) {
		fee = 800;
		num -= 10;
		while (num > 0) {
			fee += 100;
			num -= 2;
		}
	}
	else {
		fee = 600;
	}
	return fee;
}
void output(int fee)
{
	printf("��� : %d", fee);
	return;
}