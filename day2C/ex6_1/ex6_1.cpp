//그변수의 입력되는 값의 합 입력값이 0까지
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main(void) {
	int num = 1, sum = 0;

	
	while (num != 0) {
		scanf("%d", &num);
		sum += num;
	}
	return 0;
}
*/
int main(void) {
	int num;
	int sum = 0;

	scanf("%d", &num);

	while (num) {				// while(!strcmp(s1,s2))
		sum += num;
		scanf("%d", &num);
	}
	printf("sum = %d\n", sum);
	return 0;
}
//int num, result = 1;
//scanf("%d", &num);
//
//while (num != 1) {
//	result = result * num;
//	num--;
//}
//printf("result = %d", result);
//return 0;