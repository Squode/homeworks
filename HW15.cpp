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
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%d", &weight);
	return weight;
}
double inputLength(void)
{
	double length;
	printf("키를 입력하세요(m) : ");
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
	if (bmi < 18.5) printf("당신의 BMI는 %.1lf으로 저체중입니다.", bmi);
	else if (bmi < 25.0) printf("당신의 BMI는 %.1lf으로 정상체중입니다.", bmi);
	else if (bmi < 30.0) printf("당신의 BMI는 %.1lf으로 과체중입니다.", bmi);
	else if (bmi < 40.0) printf("당신의 BMI는 %.1lf으로 비만입니다.", bmi);
	else printf("당신의 BMI는 %.1lf으로 고도비만입니다.", bmi);
	return;
}