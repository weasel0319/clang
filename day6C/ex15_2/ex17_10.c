#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// 연결된 메모리의 크기 한계가 있으므로 조각 조각난 공간을 이용하기 위해 링크드 리스트 사용
// 입력받는데 음수 들어오면 빠져나감 num에 입력
int main() {
	struct A {
		int num;
		struct A* next;
	}*HEAD, * TAIL, * temp;

	HEAD = TAIL = NULL;
	while (1) {
		temp = (struct A*)malloc(sizeof(struct A));
		
		if (temp == NULL) {
			printf("malloc 실패\n");
			return 1;
		}

		scanf("%d", &temp->num);
		if (temp->num < 0) {
			break;
			free(temp);
		}
			
		
		temp->next = NULL;
		if (HEAD == NULL) {
			HEAD = TAIL = temp; // 첫번째 노드
		}
		else {
			TAIL->next = temp;
			TAIL = temp;
		}
	}
	// linked list 출력
	temp = HEAD;
	while (temp) {
		printf("%d\n", temp->num);
		temp = temp->next;
	}
	// linked list 삭제
	int del;
	printf("삭제 : ");
	scanf("%d", &del);
	temp = HEAD;
	struct A* btemp = HEAD, * freetemp = NULL;
	int cnt = 0;
	while (temp) {
		if (del == temp->num) {
			if (temp == HEAD) {					//삭제 노드가 처음인 경우
				HEAD = temp->next;
			}
			else if (temp == TAIL) {			//삭제 노드가 마지막인 경우
				btemp->next = NULL;
				TAIL = btemp;
			}
			else {
				btemp->next = temp->next;
			}

			freetemp = temp;
			temp = temp->next;
			free(freetemp);
		}	
		else {
			btemp = temp;
			temp = temp->next;
		}
		
	}

	// linked list 출력
	temp = HEAD;
	while (temp) {
		printf("%d\n", temp->num);
		temp = temp->next;
	}
}