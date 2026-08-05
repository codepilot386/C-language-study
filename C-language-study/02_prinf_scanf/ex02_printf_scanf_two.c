
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;
	int num2;

	printf("두 정수를 입력하세요 :");
	scanf("%d %d", &num1, &num2);
	printf("첫 번째 수 : %d\n", num1);
	printf("두 번째 수 : %d\n", num2);
	return 0;
}