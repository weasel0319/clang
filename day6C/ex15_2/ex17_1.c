#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 구조체 안에서도 구조체 선언 가능 자기자신도 가능, 이를 자기참조 구조체라고 부르고, 이를 이용해 링크드 리스트를 만들 수 있음
// typedef {} 자료형명; 으로 표현 값을 줄일 수 있음, 만약 없는데 뒤에 자료형명 만 있으면 그건 변수 선언




int main() {
	struct style {
		char name[20];
		int weight;
		float height;
	};

	struct style st1, st2, * p;
	p = &st1;
	scanf("%s", p->name);
	scanf("%d %f", &p->weight, &p->height); getchar();

	printf("st1: %s, %d, %.1f\n", p->name, p->weight, p->height);

	st2 = *p;

	printf("st2: %s, %d, %.1f\n", st2.name, st2.weight, st2.height);


	// 구조체 배열
	// 
	//struct style st[5],*p;
	//p = st;
	//int cnt = 0;
	//for (int i = 0; i < 5; i++) {
	//	printf("이름 입력 :");
	//	fgets(st[i].name, sizeof(st[i].name), stdin);
	//	st[i].name[strlen(st[i].name) - 1] = '\0';
	//	
	//	if (!(strcmp(st[i].name, "end")))
	//		break;

	//	printf("몸무게 , 키 입력 : ");
	//	scanf("%d %f", &st[i].weight, &st[i].height);
	//	
	//	getchar();
	//	cnt++;
	//}

	//for (int i = 0; i < cnt; i++) {
	//	printf("%s\t%d\t%.1f\n",st[i].name, st[i].weight, st[i].height);
	//	
	//}


	/*scanf("%d", &p1.weight);
	scanf("%f", &p1.height);

	p2 = p1;
	printf("%d %.1f", p2.weight, p2.height);*/
}