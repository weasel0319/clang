#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num1[5];
	int num2[5];
	float aver[5];

	int rank[5];

	for (int i = 0; i < 5; i++) {
		printf("정수 두 개 입력: ");
		scanf("%d%d", &num1[i], &num2[i]);
	}
	for (int i = 0; i < 5; i++) {
		aver[i] = (num1[i] + num2[i]) / 2.0f;
		
	}

	// 비교해서 등수 찾기
	for (int i = 0; i < 5; i++) {
		rank[i] = 1;
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				continue;
			}
			else if (aver[j] > aver[i]) {
				rank[i] += 1;
			}
		}
	}
	
	for (int i = 0; i < 5; i++) {
		printf("%d번인덱스 평균: %.1f , 등수 %d\n", i, aver[i], rank[i]);
	}

	// 정렬



	return 0;
}
//랭킹 알고리즘 방법(정렬하고 위치를 보관)(앞에서부터 비교해서 등수 찾기) 