 /*   // ���α׷��� ���� 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<malloc.h>
typedef long int DATA;
void main()
{
	DATA * p_num_list, count = 0, sum = 0, limit = 0, i, max=-999999, min=9999999;
	float average;

	printf("�Է��� ���� ������ �Է��ϼ���:  ");
	scanf("%d", &limit);

	p_num_list = (int*)malloc(sizeof(int) * limit);

	while (count < limit) {
		printf("�� �� ������ �Է��ϼ���(9999�Է½� ������):   ");
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
	printf("\n\n����  %d\n", sum);
	printf("\n����� = %0.4f\n", average);
	printf("\n�ִ��� = %d\n\n", max);
	printf("�ּڰ��� = %d", min);
	free(p_num_list);
}



     //Ʃ�͸� �˰��� X���� ���� ���� ��� 
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


  //Ʃ�͸� ����� 1 
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
		printf("\n ���ο� ������ �Է��ϼ���");
		printf("1: �̸�:  ");
		scanf("%s", p_friend->name);
		printf("2. ����:  ");
		scanf("%hu", &p_friend->age);
		printf("3. Ű:  ");
		scanf("%f", &p_friend->height);
		printf("4. ������:  ");
		scanf("%f", &p_friend->weight);
		printf("�Է��� �Ϸ��߽��ϴ�.\n");
		return 1;
	}
	else {
		printf("�ִ� %d����� ���� �����մϴ�.\n\n", MAX_COUNT);
	}
	return 0;
}

void ShowFriendList(Person* p_friend, int count)
{
	int i;
	if (count > 0) {
		printf("\n��ϵ� ģ�� ���\n");
		printf("============");
		for (i = 0; i < count; i++) {
			printf("%-14s, %3d, %6.2f, %6.2f\n", p_friend->name, p_friend->age, p_friend->height,
				p_friend->weight);
			p_friend++;
		}
		printf("===========");
	}
	else {
		printf("\n��ϵ� ģ���� �����ϴ�.\n");
	}
}

void main()
{
	Person friend[MAX_COUNT];
	int count = 0, num;
	while (1) {
		printf("  [�޴�  ]  \n");
		printf("======\n");
		printf("1.ģ���߰�\n");
		printf("2.ģ�� ��� ����\n");
		printf("3.����  \n");
		printf("=======\n");
		printf("��ȣ ����:  ");
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