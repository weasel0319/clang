#define _CRT_SECURE_NO_WARNINGS

#include "suseok.h"
//검색 기준 학생 번호 학생의 시험 성적과 평균
//번호가 아니라 이름으로

int search(STUDENT** HEAD, STUDENT** TAIL, int* count) {
	if (*count == 0) {				//학생 입력 확인
		puts("학생 입력 전\n");
		return 0;
	}
	getchar();

	STUDENT* temp;
	temp = *HEAD;
	char namecheck[20];
	int check = 0, cnt = 0, i;
	printf("학생 이름: ");
	scanf("%s", namecheck);


	while (temp) {
		if (!(strcmp(namecheck, temp->name))) {
			printf("이름\tc\tcp\tpy\t평균\n");
			printf("%s\t%d\t%d\t%d\t%.1f\n", temp->name, temp->c, temp->cpp, temp->python, temp->avg);
			cnt++;
		}
		temp = temp->next;
	}
	if (cnt == 0) {
		printf("없는 학생 입니다.\n");
		return 0;
	}
	return 1;
}