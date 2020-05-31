#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int his, lit, art, total;
	double mean;
	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d", &his, &lit, &art);
	total = his + lit + art;
	mean = (double)total / 3;
	printf("총점은 %d 이고 평균은 %.2lf 입니다.", total, mean);
	return 0;
}