//입력 포인터변수를 통해 5개의 정수 배열의 입력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num[5];
	int *pnum;

/*	pnum의 값이 변하므로 조심해야함
	pnum = num;
	for (int i = 0; i < 5; i++) {
		scanf("%d", pnum++);
	}
	pnum = num;
	for (int i = 0; i < 5; i++) {
		printf("%d", *pnum++);
	}
	*/



	// p + i로 하는게 추가대입없이 계산가능
	pnum = num;						//배열이름으로 저장하면 아래와 같이 섞어 쓸 수 있음(배열이름++은 불가능)
	for (int i = 0; i < 5; i++) {
		scanf("%d", pnum + i);
	}

	for (int i = 0; i < 5; i++) {
		printf("%d", *(num+ i));
	}



}
