#include <stdio.h>

int main()
{
	int hour, min, sec;
	int init = 54321;
	hour = init / 3600;
	min = (init - 3600*hour) / 60;
	sec = (init - 3600 * hour - 60 * min);
	printf("%d�ʴ� %d�� %d�� %d�� �Դϴ�.", init, hour, min, sec);

	return 0;
}