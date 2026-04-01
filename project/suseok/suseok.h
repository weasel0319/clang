#ifndef _SUSEOK_H_
#define _SUSEOK_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//구조체 선언
typedef struct {
	char name[20];
	int c;
	int cpp;
	int python;
	float avg;
	struct STUDENT* next;
}STUDENT;

//함수 선언, 성공하면 1반환, 실패하면 0 반환,		함수포인터 적용해보기
int input(STUDENT**, STUDENT**, int*);						//30명 이상 입력시 실패
int output(STUDENT**, STUDENT**, int*);
int search(STUDENT**, STUDENT**, int*);						//검색 학생 번호 없는 경우 실패
int delete(STUDENT**, STUDENT**, int*);						//삭제 학생 번호 없는 경우 실패

#endif