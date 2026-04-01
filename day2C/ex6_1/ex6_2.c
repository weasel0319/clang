#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//문자를 입력받아 출력 q 입력시 나오기
int main(void) {
	char cha;

	for (int i = 0; i < 10; i++) {
		scanf("%c", &cha);
		if (cha == 'q') {
			i = 11;
		}
		else {
			printf("문자 = %c", cha);
			i--;
		}
	}


	return 0;
}
// 초기식을 함수 호출해도 가능;조건식은 식이면 괜찮음; 증감식도 함수 가능













// 1 1000까지 수 중 3의 배수 몇개있는지 카운트 3의 배수의 합

//int main(void) {
//
//	int sum = 0, count = 0;
//
//	for (int i = 3; i <= 1000; i += 3) {
//		sum += i;
//		count += 1;
//	}
//	printf("sum = %d, count = %d", sum, count);
//	return 0;
//}
// 강사님은 나머지 값으로 구함

