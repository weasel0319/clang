#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// void*  는 모든 자료형을 가리킬 수 있음

void swap(void*, void*, int);

int main() {
	char ch1 = 'A', ch2 = 'B';
	int n1 = 123, n2 = 234;

	swap(&ch1, &ch2, 1);
	printf("%c %c\n", ch1, ch2);
	swap(&n1, &n2, 2);
	printf("%d %d\n", n1, n2);
	
	return 0;
}

void swap(void* v1, void* v2, int n) {
	char temp = NULL;
	int tempi = 0;
	
	switch (n) {
	case 1:
		memcpy(&temp, v1, 1);
		memcpy(v1, v2, 1);
		memcpy(v2, &temp, 1);
		break;
	case 2:
		memcpy(&tempi, v1, 4);
		memcpy(v1, v2, 4);
		memcpy(v2, &tempi, 4);
		break;
	}
}