#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num;
	scanf("%d", &num);

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			printf("소수 아님");
			break;
		}
		if (i == num - 1) {
			printf("소수");
		}
	}

}
//변수 하나 둬서 flag로 사용, 혹은 i값이 반복문의 최대가 되었을때 소수 판정




//2g 3g 5g 추 각 10개
// 무게 81g 인 경우 각 추의 갯수 출력
//int main(void) {
//	int a, b, c, weight = 81;
//	for (c = 5; c <= 50; c += 5) {
//		for (b = 3; b <= 30; b += 3) {
//			for (a = 2; a <= 20; a += 2) {
//				if (a + b + c == weight) {
//					printf("2g 추 갯수 :%d ,", a/2);
//					printf("3g 추 갯수 :%d ,", b/3);
//					printf("5g 추 갯수 :%d \n", c/5);
//					//break; 넣으면 바로 나옴
//					//코드가독성 1씩올리고 곱하는게 나음
//				}
//			}
//		}
//	}
//	return 0;
//}