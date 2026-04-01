//swap() 함수로 return 없이 main에서 2 수 입력 후 함수에 전달 두 수가 교환되도록
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* n1, int* n2);

int main(void) {
	int num1, num2;

	scanf("%d %d", &num1, &num2);
	swap(&num1, &num2);

	printf("%d %d", num1, num2);


	return 0;
}

void swap(int* n1, int* n2) {
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
