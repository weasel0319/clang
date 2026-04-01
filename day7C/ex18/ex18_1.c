#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "type.h"
// FILE* fp로 선언(구조체로 선언되어 있음)
// fp = fopen("파일명", 모드)        모드 ex: "y" "w" "a"
// fclose(fp);				파일 열고 닫기
// 파일에 저장할 때, f출력함수들은 눈으로는 숫자여도 다 문자열로 변환해 불필요한 낭비가 생김
// fread fwrite 는 메모리단위 저장으로 낭비를 줄일 수 있음, 파일 열고 닫을 때 b 바이너리 모드로 열어야함 ex wb, rb
// f함수들은 짝으로 써야 안전함
// 파일 밖에서 3 입력 출력 삭제 

#define MAX 5
int main() {
	FILE* fp;
	
	type p[MAX] = { {1, 1.1, "apple"}, {2,2.2,"grape"},{3,3.3,"pear"} };

	fp = fopen("memo.dat", "wb");
	if (fp == NULL) {
		fprintf(stderr, "cant open\n");
		return 1;
	}
	int count = 3;
	fwrite(&count, sizeof(count), 1, fp);
	for (int i = 0; i < MAX; i++)
		fwrite(&p[i], sizeof(type), 1, fp);
	fclose(fp);

	fp = fopen("memo.dat", "rb");
	if (fp == NULL) {
		fprintf(stderr, "cant open\n");
		return 1;
	}
	fread(&count, sizeof(count), 1, fp);
	fseek(fp, -(int)sizeof(type), SEEK_END);
	fread(&p[0], sizeof(type), 1, fp);
	printf("%d %f %s %d", p[0].n, p[0].f, p[0].s, sizeof(type));

	/*for (int i = 0; i < count; i++) {
		fread(&p[i], sizeof(type), 1, fp);
		printf("%d %f %s\n", p[i].n, p[i].f, p[i].s);
	}*/
	fclose(fp);














	//int n = 100;
	//float fnum = 1.234;
	//char str[80] = "Hello";

	/*fp = fopen("memo.dat", "wb");
	if (fp == NULL) {
		fprintf(stderr, "cant open memo.dat file\n");
		return 1;
	}
	fwrite(&n, sizeof(int), 1, fp);
	fwrite(&fnum, sizeof(float), 1, fp);
	fwrite(str, sizeof(str), 1, fp);
	fclose(fp);*/

	/*n = 0; fnum = 0; strcpy(str, "");
	fp = fopen("memo.dat", "rb");
	if (fp == NULL) {
		fprintf(stderr, "cant open memo.dat file\n");
		return 1;
	}
	fread(&n, sizeof(int), 1, fp);
	fread(&fnum, sizeof(float), 1, fp);
	fread(str, sizeof(str), 1, fp);
	fclose(fp);
	printf("%d %f %s", n, fnum, str);*/



}




//기본적인 파일입출력
//int main() {
//	FILE* fp;
//	int num = 10;
//	float fnum = 123.45f;
//	char str[80] = "abcdef";
//
//	fp = fopen("memo.txt", "w");
//	if (fp == NULL) {
//		printf("cant not open file memo.txt\n");
//		return 1;
//	}
//	fprintf(fp, "%d %f %s\n", num, fnum, str);
//	fclose(fp);
//
//	num = 0; fnum = 0; strcpy(str, "");
//	
//
//	fp = fopen("memo.txt", "r");
//	if (fp == NULL) {
//		printf("cant not open file memo.txt\n");
//		return 1;
//	}
//	fscanf(fp, "%d %f %s", &num, &fnum, str);
//	printf("%d %f %s", num, fnum, str);
//	fclose(fp);
//
//
//	return 0;
//}
