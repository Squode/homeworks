#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main()
{
	char fname[20], lname[20];
	printf("#���� �Է��Ͻÿ� : ");
	scanf("%s", fname);
	printf("#�̸��� �Է��Ͻÿ� : ");
	scanf("%s", lname);
	printf("%s %s\n", fname, lname);
	printf("%*d %*d", strlen(fname), strlen(fname), strlen(lname), strlen(lname));
	return 0;
}