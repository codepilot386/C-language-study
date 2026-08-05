#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char name[20];

	printf("이름을 입력하세요:");
	scanf("%s", name);


	printf("나의 이름은 %s입니다\n", name);
	return 0;
}