#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	enum { red = 10, yellow = 20, green} sign;
	int i;
	scanf("%d", &i);

	switch (i) {
	case red:
		printf("red\n");
		break;
	case yellow:
		printf("yellow\n");
		break;
	case green:
		printf("green\n");
		break;
	}




	//sign = red;						//sign에는 설정한 문자 대입 가능, 숫자로 변환
	//printf("%d\n", sign);




	/*union {
		unsigned int ip;
		unsigned char addr[4];
	} ipaddr;
	printf("%zd\n", sizeof(ipaddr));
	ipaddr.ip = 0x12345678;
	for(int i = 0; i< 4;i++)
		printf("%x\t", ipaddr.addr[i]);*/
}