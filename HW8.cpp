#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int his, lit, art, total;
	double mean;
	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &his, &lit, &art);
	total = his + lit + art;
	mean = (double)total / 3;
	printf("������ %d �̰� ����� %.2lf �Դϴ�.", total, mean);
	return 0;
}