#include <stdio.h>
void printAge(int);
void printHeight(double);

int main()
{
	char name[20] = "�ڼ���";
	int age = 25;
	double height = 177.5;

	printf("���� : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age)
{
	printf("���� : %d��\n", age);
	return;
}
void printHeight(double height)
{
	printf("���� : %lfcm", height);
	return;
}