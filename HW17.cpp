#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main()
{
	char name[20];
	double height;
	char gender;

	printf("# ���� �Է� : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';
	printf("# Ű �Է�(cm����) : ");
	scanf("%lf", &height);
	printf("# �����Է�(M/F) : ");
	scanf(" %c", &gender);

	if (gender == 'M') printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.", name, height);
	else if (gender == 'F') printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.", name, height);
	return 0;
}