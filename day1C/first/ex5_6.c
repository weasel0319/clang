#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float score;
	int grade;

	printf("시험 성적:");
	scanf("%f", &score);
	
	grade = (int)score / 10;

	switch(grade)
	{
	case 10:
	case 9:
		printf("A입니다");
		break;
	case 8:
		printf("b입니다");
		break;
	case 7:
		printf("c입니다");
		break;
	case 6:
		printf("d입니다");
		break;
	case 5:
		printf("e입니다");
		break;
	default:
		printf("f입니다");
	}
}