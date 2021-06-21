#define _CRT_SECURE_NO_WARNINGS
#define MAX   5
#include <stdio.h>
#include <stdlib.h>
typedef struct People {
	char name[14];
	unsigned short int age;
	float height;
	float weight;
}Person;

int AddFriend(Person* friend, int count)
{
	if (count < MAX) {
		friend = friend + count;
		printf("\n 새로운 친구 정보를 입력\n");
		printf("1. 이름: ");
		scanf("%s", friend->name);
		printf("2. 나이: ");
		scanf("%d", &friend->age);
		printf("3. 키: ");
		scanf("%f", &friend->height);
		printf("4. 몸무게: ");
		scanf("%f", &friend->weight);
		printf("Done\n\n");
		return 1;
	}else {
		printf("최대 인원초과! 최대 %d명까지만 관리 가능합니다.\n", MAX);
	}
	return 0;
}

void ShowFriend(Person* friend, int count)
{
	int i;
	if (count > 0) {
		printf("\n등록된 친구 목록\n");
		printf("===================\n");
		for (i = 0; i < count; i++) {
			printf("%-14s, %3d, %6.2f, %6.2f\n", friend->name, friend->age, friend->height, friend->weight);
			friend++;
		}
		printf("===================\n\n");
	}
	else {
		printf("\nEmpty\n\n");
	}
}

void main()
{
	Person friend[MAX];
	int count = 0, num;
	while (1) {
		printf("   [메뉴]   \n");
		printf("=================\n");
		printf("1. 친구추가  \n");
		printf("2.  친구목록  \n");
		printf("3.  종료  \n");
		printf("=================\n");
		printf(" 번호 선택: ");
		scanf("%d", &num);
		if (num == 1) {
			if (1 == AddFriend(friend, count))count++;
		}
		else if (num == 2) {
			ShowFriend(friend, count);
		}
		else if (num == 3) {
			break;
		}
		else {
			printf("1~3 번호만 선택 가능합니다.\n\n");
		}
	}
}