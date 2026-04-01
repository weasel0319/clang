// 계산기를 함수 방식으로(+ - * /)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int n1, int n2);
int min(int n1, int n2);
int mul(int n1, int n2);
int div(int , int );

int main(void) {
	int num1, num2, result;
	char op;

	scanf("%d%c%d", &num1, &op, &num2);

	switch (op) {
	case '+':
		result = add(num1, num2);
		printf("%d %c %d = %d\n", num1, op, num2, result);
		break;
	case '-':
		result = min(num1, num2);
		printf("%d %c %d = %d\n", num1, op, num2, result);
		break;
	case '*':
		result = mul(num1, num2);
		printf("%d %c %d = %d\n", num1, op, num2, result);
		break;
	case '/':
		if (num2 == 0) {
			printf("0으로 나눌 수 없음");
		}
		else {
			result = div(num1, num2);
			printf("%d %c %d = %d\n", num1, op, num2, result);
			break;
		}
	}

}

int add(int n1, int n2) {
	return n1 + n2;
}

int min(int n1, int n2) {
	return n1 - n2;
}

int mul(int n1, int n2) {
	return n1 * n2;
}

int div(int n1, int n2) {
	return n1 / n2;
}