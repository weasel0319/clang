#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//10개의 수 입력 입력한 수 중 10이라는 숫자 위치 찍기 (없을수도 있음)

int main() {
	int num[10], flag = 1;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (num[i] == 10) {
			printf("10은 %d번째 위치", i + 1);
			flag = 0;
		}
	}

	if (flag) {
		printf("10 없음");
	}
	
	return 0;
}








//10개의 수 입력 후 합 확인

//int main() {
//	int num[10], sum = 0;
//
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &num[i]);
//	}
//	for (int i = 0; i < 10; i++) {
//		sum += num[i];
//	}
//
//	printf("합: %d\n", sum);
//	return 0;
//}





//int main(void) {
//	int num[10];
//
//	for (int i = 0; i < 10; i++) {
//		num[i] = i * 10;
//	}
//	for (int i = 0; i < 10; i++) {
//		printf("%d\n", num[i]);
//		
//	}
//	return 0;
//}