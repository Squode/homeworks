#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	double dist, hour, min, kmph, sec;
	
	printf("* �Ÿ��� �Է��Ͻÿ�(km����) : ");
	scanf("%lf", &dist);
	printf("* �ü��� �Է��Ͻÿ�(km/h����) : ");
	scanf("%lf", &kmph);

	hour = (int)(dist / kmph);
	min = (int)((dist - kmph * hour) / kmph * 60);
	sec = (dist - kmph * hour - kmph * min / 60) / kmph * 3600;

	printf("%.2lf = > %.0lf�ð� %.0lf�� %.3lf�� �ҿ��", dist, hour, min, sec);
	return 0;
}