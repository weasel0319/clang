#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//함수 선언, 성공하면 1반환, 실패하면 0 반환
int input(int*,int*,int*,float*,int*);				//30명 이상 입력시 실패
int output(int*, int*, int*, float*, int*);
int search(int*, int*, int*, float*, int*);				//검색 학생 번호 없는 경우 실패
int delete(int*, int*, int*, float*, int*);				//삭제 학생 번호 없는 경우 실패

int main(void) {
	int menuNo;

	//배열 선언
	int c[30] = { 0 }, cp[30] = { 0 }, py[30] = {0};
	float avg[30] = {0};
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
		switch (menuNo) {
		case 1:
			if (returnfuc = input(c, cp, py, avg, &count)) printf("함수 실행\n");				//입력함수호출
			else printf("함수 실패\n");
			break;
		case 2:
			if (returnfuc = output(c, cp, py, avg, &count)) printf("함수 실행\n");					//출력함수호출
			else printf("함수 실패\n");
			break;
		case 3:
			if (returnfuc = search(c, cp, py, avg, &count)) printf("함수 실행\n");				//검색함수호출
			else printf("함수 실패\n");
			break;
		case 4:
			if (returnfuc = delete(c, cp, py, avg, &count)) printf("함수 실행\n");					//삭제함수호출
			else printf("함수 실패\n");
			break;
		case 5:
			printf("종료 선택\n");
			exit(0);					//종료
			break;
		default:
			printf("잘못 선택(1~5)\n");
			break;
		}
	} while (menuNo != 5);

	return 0;
}

//함수 정의

//3과목 정원 30명 학생 수 변동 있음 c, c++, python 평균 구하기 순서는 번호순 관리 
//입력 중 -1 입력되면 종료 - 완료

int input(int* c, int* cp, int*py, float* avg, int* count) {
	int score[3];
	int flag = 0;
	while (1) {
		if (*count == 30) {
			printf("학생 정원은 30명 입니다.\n");
			return 0;
		}

		printf("학생 번호: %d번의 c, cp, py 성적을 입력해주세요.\n", *count + 1);

		for (int i = 0; i < 3; i++) {
			scanf("%d", &score[i]);
			if (score[i] == -1) {
				puts("성적 입력 종료\n");
				flag = 1;
				break;
			}
		}
		if (flag) {
			break;
		}

		c[*count] = score[0];
		cp[*count] = score[1];
		py[*count] = score[2];
		(*count)++;

		if (*count == 30) {
			printf("학생 정원 초과로 돌아갑니다.\n");
			break;
		}
	}
	//평균 계산
	for (int i = 0; i < *count; i++) {
		avg[i] = (c[i] + cp[i] + py[i]) / 3.0f;
	}
	return 1;
}

// 출력 c c++ pytoon 평균 점수 맨아래줄 반 평균
int output(int* c, int* cp, int* py, float* avg, int* count) {						//학생 입력 확인
	if (*count == 0) {
		puts("학생 입력 전\n");
		return 0;
	}

	printf("번호\tc\tcp\tpy\t평균\n");
	int c_sum = 0, cp_sum = 0, py_sum = 0;
	float avg_sum = 0;

	for (int i = 0; i < *count; i++) {
		printf("%d\t%d\t%d\t%d\t%.1f\n", i + 1, c[i], cp[i], py[i], avg[i]); //점수 c cp py 평균
	}
	//반 평균 계산
	for (int i = 0; i < *count; i++) {
		c_sum += c[i];
		cp_sum += cp[i];
		py_sum += py[i];
		avg_sum += avg[i];
	}
	printf("반평균\t%.1f\t%.1f\t%.1f\t%.1f\n", c_sum / (float)*count, cp_sum / (float)*count, py_sum / (float)*count, avg_sum / *count);
	return 1;
}

//검색 기준 학생 번호 학생의 시험 성적과 평균

int search(int* c, int* cp, int* py, float* avg, int* count) {
	if (*count == 0) {				//학생 입력 확인
		puts("학생 입력 전\n");
		return;
	}

	int num;
	printf("학생 번호 입력: ");
	scanf("%d", &num);

	if (num <= *count && num > 0) {
		num--;
		printf("번호\tc\tcp\tpy\t평균\n");
		printf("%d\t%d\t%d\t%d\t%.1f\n", num+1, c[num], cp[num], py[num], avg[num]);
	}
	else {
		printf("없는 학생 입니다.\n");
		return 0;
	}
	return 1;
}

//삭제 뒤에거 앞으로 땡기기

int delete(int* c, int* cp, int* py, float* avg, int* count) {
	if (*count == 0) {				//학생 입력 확인
		puts("학생 입력 전\n");
		return 0;
	}

	printf("삭제할 학생 번호 입력: ");
	int num;
	scanf("%d", &num);

	if (num <= *count && num > 0) {
		num--;
		for (; num < *count; num++) {
			c[num] = c[num + 1];
			cp[num] = cp[num + 1];
			py[num] = py[num + 1];
			avg[num] = avg[num + 1];
		}
		(*count)--;
	}
	else {
		printf("없는 학생 번호입니다.\n");
		return 0;
	}

	return 1;
}