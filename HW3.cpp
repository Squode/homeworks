#include <stdio.h>

int main()
{
	int hour, min, sec;
	int init = 54321;
	hour = init / 3600;
	min = (init - 3600*hour) / 60;
	sec = (init - 3600 * hour - 60 * min);
	printf("%d초는 %d시 %d분 %d초 입니다.", init, hour, min, sec);

	return 0;
}