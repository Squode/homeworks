#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	double total = 0;
	double no[5] = { 0, };
	for (int i = 0;i < 5;i++) {
		printf("- %d 번 학생의 키는? ", i+1);
		scanf("%lf", &no[i]);
		total += no[i];
	}
	printf("다섯 명의 평균 키는 %.1lf cm 입니다.", total / 5);

	return 0;
}