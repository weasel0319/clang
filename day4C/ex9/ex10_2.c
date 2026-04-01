#define _CRT_SECURE_NO_WARNINGS
#include < stdio.h>
//배열에 3개 입력 받고 /출력 입력 순서 반대로 / 포인터 주소 계산으로
int main() {
	int ary[3];

	printf("%d\n", sizeof(ary));

	int* pa = ary;

	printf("%d\n", sizeof(pa));

	for (int i = 0; i < 3; i++) {
		scanf("%d", pa + i);
	}
	for (int i = 0; i < 3; i++) {
		printf("%d ", *(pa + 2 - i));
	}










	/*
	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];
	*/
	return 0;
}
//포인터 변수에 배열을 대입하고 난 후에 포인터변수도 배열처럼 사용 가능