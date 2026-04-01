#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//포인터 변수 char int float double 일반변수도 선언
int main(void) {
	char ch, * cp;
	int num, * pnum;
	float fnum, * pfnum;
	double dnum, * pdnum;

	cp = &ch;
	pnum = &num;
	pfnum = &fnum;
	pdnum = &pdnum;

	printf("1. %p %p %p %p\n", &ch, &num, &fnum, &dnum);

	printf("2. %p %p %p %p\n", cp, pnum, pfnum, pdnum);

	cp++;
	pnum++;
	pfnum++;
	pdnum++;
	printf("3. %p %p %p %p\n", cp, pnum, pfnum, pdnum);

	return 0;
}