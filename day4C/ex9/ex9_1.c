#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//두 개의 값 입력받아 합

//int main() {
//	int n1, n2;
//	int* p1, * p2;
//
//	p1 = &n1;
//	p2 = &n2;
//
//	scanf("%d %d", p1, p2);
//
//	printf("%d + %d = %d\n", *p1, *p2, *p1 + *p2);
//
//	printf("%d %d\n", sizeof(p1), sizeof(n1));
//}

//플룻 포인터 5번의 실수값을 입력받아 합계, 평균 출력

int main() {
	float f1, f2, f3, f4, f5, sum;
	float* p1, * p2, * p3, * p4, * p5;

	p1 = &f1;
	p2 = &f2;
	p3 = &f3;
	p4 = &f4;
	p5 = &f5;

	scanf("%f %f %f %f %f", p1, p2, p3, p4, p5);
	sum = *p1 + *p2 + *p3 + *p4 + *p5;
	

	printf("합계 = %.1f 평균%.1f\n", sum, sum / 5);
	printf("%d %d\n", sizeof(char*), sizeof(f1));

}// 반복으로 하기