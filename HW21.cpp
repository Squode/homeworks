#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	double total = 0;
	double no[5] = { 0, };
	for (int i = 0;i < 5;i++) {
		printf("- %d �� �л��� Ű��? ", i+1);
		scanf("%lf", &no[i]);
		total += no[i];
	}
	printf("�ټ� ���� ��� Ű�� %.1lf cm �Դϴ�.", total / 5);

	return 0;
}