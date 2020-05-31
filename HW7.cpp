#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	double dist, hour, min, kmph, sec;
	
	printf("* 거리를 입력하시오(km단위) : ");
	scanf("%lf", &dist);
	printf("* 시속을 입력하시오(km/h단위) : ");
	scanf("%lf", &kmph);

	hour = (int)(dist / kmph);
	min = (int)((dist - kmph * hour) / kmph * 60);
	sec = (dist - kmph * hour - kmph * min / 60) / kmph * 3600;

	printf("%.2lf = > %.0lf시간 %.0lf분 %.3lf초 소요됨", dist, hour, min, sec);
	return 0;
}