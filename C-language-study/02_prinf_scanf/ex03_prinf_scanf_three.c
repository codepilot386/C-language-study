#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num1;
	int num2;


	int sum;
	double avg;

	printf("첫 번째 숫자:");
	scanf("%d", &num1);

	printf("두 번째 숫자:");
	scanf("%d", &num2);

	sum = num1 + num2;
	avg = (double)sum / 2;
	printf("합 : %d\n", sum);
	printf("평균 : %.2f\n", avg);
	return 0;

}