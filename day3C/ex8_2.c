#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int num[] = { 70, 85, 46, 95, 66 };				//배열의 크기 5, 20바이트
	int max = 0;
	int count = 0;
	int size = sizeof(num) / sizeof(num[0]);
	printf("%d\n", sizeof(num) / sizeof(num[0]));

	for (int i = 0; i < size; i++) {
		if (num[i] > max) {
			max = num[i];
			count = i + 1;
		}
	}
	printf("가장 큰 값: %d, 위치: %d번째", max, count);
	return 0;
}
// max에 0을 넣는것말고 배열에 있는 첫번째 값을 넣어야 음수 가정인 경우 성립, 변수 명을 count 말고 max와 관련된 느낌으로 max_no
// 조건식에 수식을 넣을때 변화가 되는 값이 아니면 여러번 계산해야 해서 불필요한 작업을 함