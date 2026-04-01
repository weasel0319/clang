#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// malloc(size), calloc(size, count), realloc(ptr, size)
// free(ptr) 처음 할당받은 메모리 주소를 넣어야함
// malloc은 형 변환을 해줘야함, 연속적인 메모리 공간을 찾아서 리턴 == 배열처럼 사용이 가능

int main() {
	int* p;
	p = (int*)malloc(sizeof(int) * 5);
	if (p == NULL) {
		printf("error: malloc failed\n");
		return 1;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d번 정수 입력 ", i + 1);
		scanf("%d", p + i);
	}
	
	for (int i = 0; i < 5; i++) {
		printf("*p: %d\n", p[i]);
	}
	
	p = realloc(p, sizeof(int) * 10);

	for (int i = 0; i < 5; i++) {
		printf("*p: %d\n", p[i]);
	}

	for (int i = 5; i < 10; i++) {
		printf("%d번 정수 입력 ", i + 1);
		scanf("%d", p + i);
	}

	for (int i = 0; i < 10; i++) {
		printf("*p: %d\n", p[i]);
	}

	free(p);

	return 0;
}