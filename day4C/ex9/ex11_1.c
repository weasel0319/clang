//scanf 는 숫자 다음 문자를 입력할때 구분자도 받아들여서 처음걸 무시해야함
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char ch[100];
	int num;

	while (1) {
		printf("num: ");
		scanf("%d", &num);

		if (num == -1) {
			break;
		}
		
		getchar();
		printf("ch: ");
		gets(ch);
		//scanf("%c", &ch);

		//printf("num: %d, ch: %s\n", num, ch);

		for (int i = 0; i < strlen(ch); i++)
			putchar(ch[i]);
		putchar('\n');
	}

	return 0;
}