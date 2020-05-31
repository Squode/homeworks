#include <stdio.h>

int main()
{
	double day = 365.2422;
	int iday, hour, min;
	double sec;
	iday = (int)day;
	day -= iday;
	hour = (int)(day * 24);
	min = (int)((day * 24 - hour) * 60);
	sec = (((day * 24 - hour) * 60 - min) * 60);
	printf("365.2422일은 %d일 %d시간 %d분 %.2lf초입니다.", iday, hour, min, sec);
	return 0;
}