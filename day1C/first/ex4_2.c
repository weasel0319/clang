#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double firstNum;
	double secondNum;

	printf("숫자 두개를 입력하세요\n");
	scanf("%lf%lf", &firstNum, &secondNum);
	printf("두 수를 나눈 결과 : %.1lf", firstNum / secondNum);
}