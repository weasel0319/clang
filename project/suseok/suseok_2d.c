#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "suseok.h"

int main(void) {
	int menuNo;
	
	//STUDENT st[30];				//구조체
	STUDENT* HEAD, * TAIL;
	HEAD = TAIL = NULL;

	int (*fptr[4])(STUDENT**, STUDENT**, int*);							//함수포인터
	fptr[0] = input;
	fptr[1] = output;
	fptr[2] = search;
	fptr[3] = delete;

	//배열 선언
	//char names[30][20];
	//int score[30][3];

	//int c[30] = { 0 }, cp[30] = { 0 }, py[30] = { 0 };
	//float avg[30] = { 0 };
	int count = 0;				//학생 수, 입력에서 성적 들어올때 1씩 증가, 삭제하면 1씩 감소 
	int returnfuc;

	do {
		printf("-----------------------------------------------\n");
		printf("1. 입력\n");
		printf("2. 출력\n");
		printf("3. 검색\n");
		printf("4. 삭제\n");
		printf("5. 종료\n");
		scanf("%d", &menuNo);
		
		if (menuNo <= 4 && menuNo >= 1) {
			if (returnfuc = fptr[menuNo - 1](&HEAD, &TAIL, &count)) {
				printf("함수성공\n");
			}
			else printf("함수 실패\n");
		}
		else if (menuNo == 5) continue;
		else printf("1~5 숫자를 고르세요\n");



		//switch (menuNo) {
		//case 1:
		//	if (returnfuc = input(st, &count)) printf("함수 실행\n");				//입력함수호출
		//	else printf("함수 실패\n");
		//	break;
		//case 2:
		//	if (returnfuc = output(st, &count)) printf("함수 실행\n");					//출력함수호출
		//	else printf("함수 실패\n");
		//	break;
		//case 3:
		//	if (returnfuc = search(st, &count)) printf("함수 실행\n");				//검색함수호출
		//	else printf("함수 실패\n");
		//	break;
		//case 4:
		//	if (returnfuc = delete(st, &count)) printf("함수 실행\n");					//삭제함수호출
		//	else printf("함수 실패\n");
		//	break;
		//case 5:
		//	printf("종료 선택\n");
		//	exit(0);					//종료
		//	break;
		//default:
		//	printf("잘못 선택(1~5)\n");
		//	break;
		//}
	} while (menuNo != 5);

	return 0;
}