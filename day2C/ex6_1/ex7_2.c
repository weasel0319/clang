//어떤 수를 입력하면 그 수까지 소수 출력 소수인지 아닌지 판단은 함수 메인에서 소수인지 아닌지 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fac(int num) {
	if (num == 2) {
		return 2;
	}
	return num * fac(num - 1);
}

int main() {
	int n;

	scanf("%d", &n);

	printf("%d!의 값: %d", n, fac(n));

	return 0;	
}















//int isPrime(int);
//
//int main(void) {
//	int n;
//
//	scanf("%d", &n);
//
//	for (int j = 2; j <= n; j++) {
//		if (isPrime(j)) {
//			printf("%d = 소수\n", j);
//		}
//	}
//}
//
//int isPrime(int num) {
//	int i, flag = 0;
//	for ( i = 2; i < num; i++) {
//		if (num % i == 0) {
//			break;
//		}
//	}
//	if (i == num) {
//		flag = 1;
//	}
//	return flag;
//}
// break 대신 return 0 , if 없어도 소수가 아니면 return 0이 된것이기때문에 그냥 return 1 해도 괜찮음
