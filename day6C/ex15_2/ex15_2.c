#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {

	int a = 100;
	int* p;
	int** dp;

	p = &a;
	dp = &p;

	scanf("%d", p);
	printf("%d %d %d\n", a, *p, **dp);

	scanf("%d", *dp);
	printf("%d %d %d\n", a, *p, **dp);

	return 0;
}
