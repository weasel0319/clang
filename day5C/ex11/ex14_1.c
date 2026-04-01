#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num[2][3];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("숫자 입력 : ");
			scanf("%d", &num[i][j]);
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}
