#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add();
int sub();
int mul();
int div();
// 1 2 3 4  입력 순으로 함수 4가지 대입 함수 들어가서 숫자 입력 받음
int main() {
	int(*fptr[4])();
	int N;

	fptr[0] = add;
	fptr[1] = sub;
	fptr[2] = mul;
	fptr[3] = div;

	printf("1 = add, 2 = sub, 3 = mul, 4 = div\n");
	scanf("%d", &N);
	
	switch (N) {
	case 1:
		printf("%d\n", fptr[0]());
		break;
	case 2:
		printf("%d\n", fptr[1]());
		break;
	case 3:
		printf("%d\n", fptr[2]());
		break;
	case 4:
		printf("%d\n", fptr[3]());
		break;
	default:
		printf("1, 2, 3, 4 만 입력\n");
	}
	//스위치 안쓰고 써도 가능(코드 사이즈 줄이기)
	

	/*fptr = add;
	printf("%d\n", fptr(100, 200));
	fptr = sub;
	fptr(100, 200);
	printf("%d\n", fptr(100, 200));*/

	return 0;
}

int add() {
	int a, b;
	printf("더하기 숫자 두 개 입력\n");
	scanf("%d %d", &a, &b);
	return a + b;
}

int sub() {
	int a, b;
	printf("빼기 숫자 두 개 입력\n");
	scanf("%d %d", &a, &b);
	return a - b;
}

int mul() {
	int a, b;
	printf("곱하기 숫자 두 개 입력\n");
	scanf("%d %d", &a, &b);
	return a * b;
}

int div() {
	int a, b;
	printf("나누기 숫자 두 개 입력\n");
	scanf("%d %d", &a, &b);
	return a / b;
}