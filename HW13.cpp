#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main()
{
	char fname[20], lname[20];
	printf("#성을 입력하시오 : ");
	scanf("%s", fname);
	printf("#이름을 입력하시오 : ");
	scanf("%s", lname);
	printf("%s %s\n", fname, lname);
	printf("%*d %*d", strlen(fname), strlen(fname), strlen(lname), strlen(lname));
	return 0;
}