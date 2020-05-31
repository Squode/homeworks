#include <stdio.h>
#pragma warning (disable:4996)

int input(const char*);
void myflush();
int main()
{
	int i, num = input("# 정수값을 입력하세요 : ");
	for (i = 0;i < num;i++) {
		printf("*");
		if ((i + 1) % 5 == 0) printf("\n");
	}
	return 0;
}

int input(const char* msg)
{
	int n;
	printf(msg);
	scanf("%d", &n);
	while (getchar() != '\n') {
		myflush();
		printf(msg);
		scanf("%d", &n);
	}
	return n;
}

void myflush()
{
	while (getchar() != '\n') {
		;
	}
}