#include "suseok.h"
// 출력 c c++ pytoon 평균 점수 맨아래줄 반 평균

int output(STUDENT** HEAD, STUDENT** TAIL, int* count) {						//학생 입력 확인
	if (*count == 0) {
		puts("학생 입력 전\n");
		return 0;
	}

	printf("이름\tc\tcp\tpy\t평균\n");
	int c_sum = 0, cp_sum = 0, py_sum = 0;
	float avg_sum = 0;
	STUDENT* temp;
	//for (int i = 0; i < *count; i++) {
	//	printf("%s\t%d\t%d\t%d\t%.1f\n", (st + i)->name, (st + i)->c, (st + i)->cpp, (st + i)->python, (st + i)->avg); //점수 c cp py 평균
	//}
	temp = *HEAD;
	while (temp) {
		printf("%s\t%d\t%d\t%d\t%.1f\n", temp->name, temp->c, temp->cpp, temp->python, temp->avg); //점수 c cp py 평균
		//반 평균 계산
		c_sum += temp->c;
		cp_sum += temp->cpp;
		py_sum += temp->python;
		avg_sum += temp->avg;
		temp = temp->next;
	}
	
	printf("반평균\t%.1f\t%.1f\t%.1f\t%.1f\n", c_sum / (float)*count, cp_sum / (float)*count, py_sum / (float)*count, avg_sum / *count);
	return 1;
}