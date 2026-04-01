//배열 두개 80자 첫번째는 키보드에서 문자 입력 받음 첫번째를 두번째에 복사 출력은 두번째 문자 배열을 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[80];
	char str2[80];

	scanf("%s", str1);

	if (sizeof(str2) > strlen("apple")) {
		strcpy(str2, str1);
		printf("복사 : %s\n", str2);
	}
}

//문자열 크기 재는법(\0 만날때까지 카운트)()
