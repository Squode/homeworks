#include <stdio.h>
#define INITFARE 660
#define KWFARE 88.5
#define TAXRATE 0.09
#pragma warning (disable:4996)

int input(void);
void printOut(double);

int main()
{
	int kw = input();
	double total, tax;
	total = INITFARE + (kw * KWFARE);
	tax = total * TAXRATE;
	total += tax;
	printOut(total);
	return 0;
}

int input(void)
{
	int kw;
	printf("���� ��뷮�� �Է��ϼ���(kw):");
	scanf("%d", &kw);
	return kw;
}
void printOut(double total)
{
	printf("���� ������� %lf�� �Դϴ�.", total);
}