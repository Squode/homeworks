#include <stdio.h>

int main()
{
	int money = 278970;
	int x50000, x10000, x5000, x1000, x500, x100, x50, x10;
	x50000 = x10000 = x5000 = x1000 = x500 = x100 = x50 = x10 = 0;

	x50000 = money / 50000;
	money -= x50000 * 50000;
	x10000 = money / 10000;
	money -= x10000 * 10000;
	x5000 = money / 5000;
	money -= x5000 * 5000;
	x1000 = money / 1000;
	money -= x1000 * 1000;
	x500 = money / 500;
	money -= x500 * 500;
	x100 = money / 100;
	money -= x100 * 100;
	x50 = money / 50;
	money -= x50 * 50;
	x10 = money / 10;
	money -= x10 * 10;

	printf("50000���� => %d��\n10000���� => %d��\n5000���� => %d��\n1000���� => %d��\n500���� => %d��\n100���� => %d��\n50���� => %d��\n10���� => %d��\n", x50000, x10000, x5000, x1000, x500, x100, x50, x10);

	return 0;
}