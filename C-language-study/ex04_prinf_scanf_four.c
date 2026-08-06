#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	int hundred;
	int ten;
	int one;


	printf("숫자를 입력하세요.");
	scanf("%d,", &num);


	hundred = num / 100;

	ten = (num % 100) / 10;
	one = num % 10;


	printf("백의 자리 : %d\n", hundred);
	printf("십의 자리 : %d\n", ten);
	printf("일의 자리 : %d\n", one);
	return 0;

}