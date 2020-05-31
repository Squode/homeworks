#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int ascii;
	printf("ASCII code값을 입력하시오 : ");
	scanf("%d", &ascii);
	printf("%d은 '%C'의 ASCII code 입니다.", ascii, ascii);
	return 0;
}