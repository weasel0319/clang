//5명의 이름 입력 후 검색, 검색할 이름 따로 입력 받음 그 이름이 등록되어 있는지 아닌지 확인, 등록되어있다면 몇번째 위치에 있는지
//3명의 이름으로 초기화 printf로 출력이잘되는지
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char* name[3];

	for (int i = 0; i < 3; i++) {
		printf("이름 입력: ");
		fgets(name[i], sizeof(name[i]), stdin);
		name[strlen(name[i]) - 1]= '\0';
	}
	for (int i = 0; i < 3; i++) {
		printf("이름:", *name[i]);
	}
	
}	

//int main(void) {
//	char name[5][20];
//	char search[20];
//
//	for (int i = 0; i < 5; i++) {
//		printf("이름 입력: ");
//		fgets(name[i], sizeof(name[i]), stdin);
//		name[i][strlen(name[i]) - 1] = '\0';
//	}
//	printf("검색할 이름: ");
//	fgets(search, sizeof(search), stdin);
//	search[strlen(search) - 1] = '\0';
//
//	for (int i = 0; i < 5; i++) {
//		if (!(strcmp(search, name[i]))) {
//			printf("등록된 번호: %d", i + 1);
//			break;
//		}
//		if (i == 4) {
//			printf("미등록 이름");
//		}
//	}
//	//동명이인 있는 경우 못찾음
//
//}