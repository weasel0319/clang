#define _CRT_SECURE_NO_WARNINGS

#include "suseok.h"

int save(STUDENT** HEAD, STUDENT** TAIL, int* count) {
	FILE* fp = fopen("save.txt", 'wb');
	if (fp == NULL) {
		printf("파일 열기 실패");
		return 0;
	}

	STUDENT* saveF;
	saveF = *HEAD;

	fprintf(fp, "%d\n", *count);
	for (int i = 0; i < *count; i++) {
		fread()
	}

}