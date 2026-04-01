#include <stdio.h>

void func(char(*p)[20]) {
	for (int i = 0; i < 3; i++) {
		printf("%s\n", p[i]);
	}
}


int main() {
	char names[3][20] = { "kim", "lee", "park" };
	
	func(names);

	return 0;
}