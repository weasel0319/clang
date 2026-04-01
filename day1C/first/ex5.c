#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//수 하나 입력, 양수면 양수라고 출력
/*int main(void) {
	int a;

	scanf("%d", &a);
	if (a >= 0) {
		printf("양수입니다.");
	}
}*/
//정수 입력받아 짝수 홀수 출력
int main(void) {
	int a;

	scanf("%d", &a);
	if (a % 2 == 0) 
	{
		printf("짝수입니다.");
	}
	else
	{
		printf("홀수입니다.");
	}
}
//