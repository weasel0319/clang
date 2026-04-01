//나이 물어보고 입력받음, 그 나이에 맞는 티켓값 65세 이상: 0 18~64세: 20000 14~17: 10000 8~13 4000 8세 미만: 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 세 수가 입력되었을때, 제일 큰 수, 제일 작은 수 중간값이 누구인지 출력
//max, min을 가정해 a,b를 비교
int main(void) {
	int num1, num2, num3, max, min;
	printf("정수 3개를 입력하세요");

	scanf("%d%d%d", &num1, &num2, &num3);
	
	
	if (num1 > num2) {
		max = num1;
		min = num2;
		
	}
	else {
		max = num2;
		min = num1;

	}
	if (num3 > max) {
		max = num3;
	}
	else if (num3 > min) {
		min = num3;
	}
	printf("최대 %d 최소 %d", max, min);
}





















/*int main(void) {
	int age;

	scanf("%d", &age);

	if (age >= 65) {
		printf("티켓값 : 0");
	}
	else if (age >= 18) {
		printf("티켓값 : 20000");
	}
	else if (age >= 14) {
		printf("티켓값 : 10000");
	}
	else if (age >= 8) {
		printf("티켓값 : 4000");
	}
	else if (age >= 0) {
		printf("티켓값 : 0");
	}
	else {
		printf("나이가 잘못 입력했습니다.");
	}
}*/
//이미 조건을 통과하고 왔기 때문에 && 없이 age >= 18 이렇게만 있어도 작동함