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
	printf("���尴�� ���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);
	return age;
}
int inputNum(void)
{
	int num = 0;
	printf("���尴�� ���� �Է��Ͻÿ� : ");
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
	printf("\n����� => %d��\n���αݾ� => %d��\n�����ݾ� => %d��\n", total, discount, total - discount);
	return;
}