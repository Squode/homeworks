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
	printf("365.2422���� %d�� %d�ð� %d�� %.2lf���Դϴ�.", iday, hour, min, sec);
	return 0;
}