#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//switch case 입력 : 정수 연산자 정수
//연산자 종류 + - * /
int main(void) {
	int num1, num2;
	char cal;
	float result;
	printf("정수 연산자 정수 순으로 입력해주세요.");
	scanf("%d%c%d", &num1, &cal, &num2);

	if (cal == '+' || cal == '-' || cal == '*' || cal == '/') 
	{
		switch(cal) 
		{
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = (float)num1 / num2;
			break;
		}
		printf("%f", result);
	}
	else {
		printf("연산자 오류");
	}
	
}