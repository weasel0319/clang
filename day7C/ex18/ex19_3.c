#include <stdio.h>
#include "type.h"
#define max(n1,n2) ((n1)>(n2))? n1:n2	//매크로 함수는 괄호를 철저하게 쳐야함, 자료형 체크가 불가능
#define bit1(n, b) ((n)&(1<<(b-1)))? 1:0
#define bit2(n, b) n = ((n)|(1<<(b-1)))
#define bitflip(n, b) n = ((n)^(1<<(b-1))) 
//#define DEBUG

// 00001010
// 00001000
int main() {
	/*int num;
	float num2;
	num = max(10, 20);
	printf("num : %f\n", num);
	num2 = max(1.7, 0.5);
	printf("num : %f\n", num2);*/
	int num = 10;

#ifdef DEBUG
	printf("%d\n", num);
#endif

	printf("%d\n", bit1(num, 3)); // b번째가 1, 0 확인
	printf("%d\n", bit2(num, 4)); // b번째 값 1로 키기
	printf("%x\n", bitflip(num, 3)); // b번째 값 반전
	func();
	return 0;
}