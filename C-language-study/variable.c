#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{

    char name[20];
    int age;

    printf("이름을 입력하세요:");
    scanf("%s", name);

    printf("나이를 입력하세요:");
    scanf("%d", &age);

    printf("\n이름:%s\n",name);
    printf("나이:%d살\n", age);
    return 0;
        
}