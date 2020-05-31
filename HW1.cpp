#include <stdio.h>
void printAge(int);
void printHeight(double);

int main()
{
	char name[20] = "박성훈";
	int age = 25;
	double height = 177.5;

	printf("성명 : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age)
{
	printf("나이 : %d세\n", age);
	return;
}
void printHeight(double height)
{
	printf("신장 : %lfcm", height);
	return;
}