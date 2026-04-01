#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 배열 선언 main, 입력 input함수 출력 main

void input(int *pn, int count) {
	/*int n;
	printf("배열의 갯수");
	scanf("%d", &n);*/
	for (int i = 0; i < count; i++) {
		scanf("%d", pn + i);
	}

}

int main(void) {
	int num[5];
	

	int count = sizeof(num)/sizeof(num[0]);
	input(num, count);

	printf("배열 출력\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(num + i));
	}

	return 0;
}