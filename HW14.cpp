#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main()
{
	char word[20];
	int len;
	printf("* ���ڿ� �Է� : ");
	scanf("%s", word);
	len = strlen(word);
	printf("[%*.*s...]", len, (int)len / 2, word);
	return 0;
}