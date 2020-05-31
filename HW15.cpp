#include <stdio.h>
#pragma warning (disable:4996)

int inputWeight(void);
double inputLength(void);
double calcBmi(int, double);
void output(double);

int main()
{
	int weight;
	double length, bmi;
	weight = inputWeight();
	length = inputLength();
	bmi = calcBmi(weight, length);
	output(bmi);
	return 0;
}


int inputWeight(void) 
{
	int weight;
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%d", &weight);
	return weight;
}
double inputLength(void)
{
	double length;
	printf("Ű�� �Է��ϼ���(m) : ");
	scanf("%lf", &length);
	return length;
}
double calcBmi(int weight, double length)
{
	double bmi = weight / (length * length);
	return bmi;
}
void output(double bmi)
{
	if (bmi < 18.5) printf("����� BMI�� %.1lf���� ��ü���Դϴ�.", bmi);
	else if (bmi < 25.0) printf("����� BMI�� %.1lf���� ����ü���Դϴ�.", bmi);
	else if (bmi < 30.0) printf("����� BMI�� %.1lf���� ��ü���Դϴ�.", bmi);
	else if (bmi < 40.0) printf("����� BMI�� %.1lf���� ���Դϴ�.", bmi);
	else printf("����� BMI�� %.1lf���� �����Դϴ�.", bmi);
	return;
}