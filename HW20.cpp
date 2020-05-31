#include <stdio.h>
#pragma warning (disable:4996)

int input(const char*);
int calTotal(int);
int calTax(int);
void output(int, int);

int main()
{
	int hour = input("* 1���ϰ��� �ٹ��ð��� �Է��Ͻÿ� : ");
	int total = calTotal(hour);
	int tax = calTax(total);
	output(total, tax);
	return 0;
}

int input(const char* msg)
{
	int ivalue;
	printf(msg);
	scanf("%d", &ivalue);
	return ivalue;
}
int calTotal(int hour)
{
	int total = hour * 3000;
	if (hour > 40) {
		total += (int)(0.5 * ((double)hour - 40) * 3000);
	}
	return total;
}
int calTax(int total)
{
	int tax = 0;
	tax = (int)(total * 0.15);
	if (total >= 100000) {
		tax += (int)((total - 100000)* 0.1);
	}
	return tax;
}
void output(int total, int tax)
{
	printf("# �Ѽ��� : %6d��\n# �� �� : %6d��\n# �Ǽ��� : %6d��", total, tax, total - tax);
	return;
}