#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//문자열을 입력 받아 결합하는 프로그램
// char big_str[500]
// "end" 문자열이 입력될 때까지 반복,500크기를 넘으려하면 종료

int main() {
	char big_str[500];
	for (int i = 0; i < 500; i++)
		big_str[i] = '\0';
	// 이렇게 안하고 그냥 = "";로 해도 초기화 가능

	char plus_str[500];				//str 입력에 대한 함수명으로 바꾸면 좋았을듯.
	
	do {
		printf("현재 문자열 : %s\n", big_str);
		gets(plus_str);
		if (strcmp(plus_str, "end") == 0) { // strcmp는 같으면 0 아니면 다른 값이 나타나므로 !()를 이용해서 조건 충족 가능
			puts("end 입력");
			break;
		}
		else if (strlen(big_str) + strlen(plus_str) >= 500) {			//합이 500이 넘지 않게
			break;
		}
		else {
			strcat(big_str, plus_str);
		}

	} while (strlen(big_str) < 500); //이렇게 안하고 그냥 반복해도 ㄱㅊ
}



//int main(void) {
//	char str[5];
//
//	fgets(str, sizeof(str), stdin);
//	//str[strlen(str)] = '\0';
//	//puts(str);
//	printf("%s", str);
//	fgets(str, sizeof(str), stdin);
//	//str[strlen(str)] = '\0';
//	//puts(str);
//	printf("%s", str);
//
//	return 0;
//}