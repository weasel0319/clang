#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add() {
	static int count = 0;
	count++;
	printf("%d", count);
}
int main(void) {
	for (int i = 0; i < 3; i++)
		add();

	return 0;


}