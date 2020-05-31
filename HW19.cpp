#include <stdio.h>
#pragma warning (disable:4996)

int input(const char*);
int yearCheck(int);
void output(int, int);

int main()
{
	int year = input("년도를 입력하시오 : ");
	output(year, yearCheck(year));
	return 0;
}

int input(const char* msg)
{
	int year;
	printf(msg);
	scanf("%d", &year);
	return year;
}

int yearCheck(int year) 
{
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return 1;
			}
			else return 0;
		}
		else return 1;
	}
	else return 0;
}
void output(int year, int check)
{
	if (check == 0) {
		printf("%d년은 평년(Common year)입니다.", year);
	}
	else printf("%d년은 윤년(Leap year)입니다.", year);
	return;
}
