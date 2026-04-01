#define _CRT_SECURE_NO_WARNINGS

#include "suseok.h"

//함수 정의

//3과목 정원 30명 학생 수 변동 있음 c, c++, python 평균 구하기 순서는 번호순 관리 
//입력 중 -1 입력되면 종료 - 완료

int input(STUDENT** HEAD, STUDENT** TAIL, int* count) {
	
	int scoretemp[3];
	int flag = 0;

	while (1) {
		if (*count == 30) {
			printf("학생 정원은 30명 입니다.\n");
			return 0;
		}

		STUDENT* temp = (STUDENT*)malloc(sizeof(STUDENT));
		if (temp == NULL) {
			printf("malloc 실패\n");
			return 1;
		}
		temp->next = NULL;

		printf("c, cp, py 성적을 입력해주세요.\n");
		
		for (int i = 0; i < 3; i++) {
			scanf("%d", &scoretemp[i]);
			if (scoretemp[i] == -1) {
				puts("성적 입력 종료\n");
				flag = 1;
				break;
			}
		}

		if (flag) {
			free(temp);
			break;
		}
		
		getchar();
		printf("학생 이름을 입력해주세요.\n");
		fgets(temp->name, sizeof(temp->name), stdin);
		temp->name[strlen(temp->name) - 1] = '\0';

		temp->c = scoretemp[0];
		temp->cpp = scoretemp[1];
		temp->python = scoretemp[2];

		//평균 계산
		temp->avg = (temp->c + temp->cpp + temp->python) / 3.0f;

		(*count)++;

		if (*count == 30) {
			printf("학생 정원 초과로 돌아갑니다.\n");
			break;
		}

		if (*HEAD == NULL) {
			*HEAD = *TAIL = temp;
		}
		else {
			(*TAIL)->next = temp;
			*TAIL = temp;
		}

	}
	return 1;
}