#define _CRT_SECURE_NO_WARNINGS

#include "suseok.h"

//삭제 뒤에거 앞으로 땡기기
//번호가 아니라 이름으로

int delete(STUDENT** HEAD, STUDENT** TAIL, int* count) {
	if (*count == 0) {				//학생 입력 확인
		puts("학생 입력 전\n");
		return 0;
	}
	
	

	getchar();
	char namecheck[20];
	int check = 0, num = 0, i;
	printf("삭제할 학생 이름: ");
	scanf("%s", namecheck);
	
	STUDENT* temp,* btemp,* freetemp = NULL;
	btemp = temp = *HEAD;

	for (i = 0; i < *count;) {
		if (!(strcmp(namecheck, temp->name))) {
			if (temp == *HEAD) {
				*HEAD = temp->next;
			}
			else if (temp == *TAIL) {
				btemp->next = NULL;
				*TAIL = btemp;
			}
			else {
				btemp->next = temp->next;
			}
			freetemp = temp;
			temp = temp->next;
			free(freetemp);



			//num = i;
			//for (; num < *count; num++) {
			//	/*strcpy((st + num)->name, (st + num + 1)->name);
			//	(st + num)->c = (st + num + 1)->c;
			//	(st + num)->cpp = (st + num + 1)->cpp;
			//	(st + num)->python = (st + num + 1)->python;
			//	(st + num)->avg = (st + num + 1)->avg;*/
			//	st[num] = st[num + 1];			//한번에 해도 ㄱㅊ

			//}
			(*count)--;
			check++;
		}
		else {
			btemp = temp;
			temp = temp->next;
		}
		i++;
	}
	if (check == 0) {
		printf("없는 학생 입니다.\n");
		return 0;
	}

	return 1;
}