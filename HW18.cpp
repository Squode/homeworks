#include <stdio.h>
#pragma warning (disable:4996)

int inputAge(void);
int inputNum(void);
void printOut(int, int);

int main()
{
	int age, num;
	age = inputAge();
	num = inputNum();
	printOut(age, num);
	return 0;
}

int inputAge(void)
{
	int age = 0;
	printf("입장객의 나이를 입력하시오 : ");
	scanf("%d", &age);
	return age;
}
int inputNum(void)
{
	int num = 0;
	printf("입장객의 수를 입력하시오 : ");
	scanf("%d", &num);
	return num;
}
void printOut(int age, int num)
{
	int total, discount;
	total = discount = 0;
	if (age <= 7) {
		total = 500 * num;
	}
	else if (age <= 13) {
		total = 700 * num;
	}
	else if (age <= 19) {
		total = 1000 * num;
	}
	else if (age <= 55) {
		total = 1500 * num;
	}
	else {
		total = 500 * num;
	}
	if (num >= 5) {
		discount = total * 0.1;
	}
	printf("\n입장료 => %d원\n할인금액 => %d원\n결제금액 => %d원\n", total, discount, total - discount);
	return;
}