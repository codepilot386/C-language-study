


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int worktime;
	int pay;
	int total;
	int basic;
	double bonus;
	int overtime;


	printf("근무시간을 입력하세요:");
	scanf("%d", &worktime);

	printf("시간당 급여를 입력하세요:");
	scanf("%d", &pay);

	basic = 40 * pay;
	overtime = worktime - 40;
	bonus = overtime * pay * 1.5;
	total = basic + bonus;

	printf("기본 급여: %d원\n", basic);
	printf("초과 수당: %.0f원\n", bonus);
	printf("총 급여: %d원\n",total);

	return 0;

}