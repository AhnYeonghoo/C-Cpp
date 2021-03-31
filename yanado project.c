 /*   // 프로그래밍 과제 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<malloc.h>
typedef long int DATA;
void main()
{
	DATA * p_num_list, count = 0, sum = 0, limit = 0, i, max=-999999, min=9999999;
	float average;

	printf("입력할 정수 개수를 입력하세요:  ");
	scanf("%d", &limit);

	p_num_list = (int*)malloc(sizeof(int) * limit);

	while (count < limit) {
		printf("더 할 정수를 입력하세요(9999입력시 종료함):   ");
		scanf("%d", p_num_list + count);
		if (*(p_num_list + count) == 9999)break;
		if (*(p_num_list + count) > max) {
			max = *(p_num_list + count);
		}
		else;
		if (*(p_num_list + count) < min) {
			min = *(p_num_list + count);
		}
		else;
		count++;
	}
	for (i = 0; i < count; i++) {
		sum = sum + *(p_num_list + i);
		
	}
	average = (float)sum / limit;
	printf("\n\n합은  %d\n", sum);
	printf("\n평균은 = %0.4f\n", average);
	printf("\n최댓값은 = %d\n\n", max);
	printf("최솟값은 = %d", min);
	free(p_num_list);
}



     //튜터링 알고리즘 X보다 작은 수들 출력 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, x, i, num;
	scanf("%d%d", &n, &x);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num < x) {
			printf("%d ", num);
		}
		else;
	}
	return 0;
}


  //튜터링 별찍기 1 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j =-1; j < i; j++) {
			printf("*");
			
		}
		printf("\n");
	}
}
*/
#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#define MAX_COUNT 5
typedef struct People
{
	char name[14];
	unsigned short int age;
	float height;
	float weight;
}Person;

int AddFriend(Person* p_friend, int count)
{
	if (count < MAX_COUNT)
	{
		p_friend = p_friend + count;
		printf("\n 새로운 정보를 입력하세요");
		printf("1: 이름:  ");
		scanf("%s", p_friend->name);
		printf("2. 나이:  ");
		scanf("%hu", &p_friend->age);
		printf("3. 키:  ");
		scanf("%f", &p_friend->height);
		printf("4. 몸무게:  ");
		scanf("%f", &p_friend->weight);
		printf("입력을 완료했습니다.\n");
		return 1;
	}
	else {
		printf("최대 %d명까지 관리 가능합니다.\n\n", MAX_COUNT);
	}
	return 0;
}

void ShowFriendList(Person* p_friend, int count)
{
	int i;
	if (count > 0) {
		printf("\n등록된 친구 목록\n");
		printf("============");
		for (i = 0; i < count; i++) {
			printf("%-14s, %3d, %6.2f, %6.2f\n", p_friend->name, p_friend->age, p_friend->height,
				p_friend->weight);
			p_friend++;
		}
		printf("===========");
	}
	else {
		printf("\n등록된 친구가 없습니다.\n");
	}
}

void main()
{
	Person friend[MAX_COUNT];
	int count = 0, num;
	while (1) {
		printf("  [메뉴  ]  \n");
		printf("======\n");
		printf("1.친구추가\n");
		printf("2.친구 목록 보기\n");
		printf("3.종료  \n");
		printf("=======\n");
		printf("번호 선택:  ");
		scanf("%d", &num);
		if (num == 1) {
			if (1 == AddFriend(friend, count))count++;
			
		}
		else if (num == 3) {
			break;
		}
		else if (num == 2) {
			ShowFriendList(friend, count);
		}
		else {

		}

	}
}