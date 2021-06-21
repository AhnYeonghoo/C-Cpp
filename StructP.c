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
		printf("\n ���ο� ģ�� ������ �Է�\n");
		printf("1. �̸�: ");
		scanf("%s", friend->name);
		printf("2. ����: ");
		scanf("%d", &friend->age);
		printf("3. Ű: ");
		scanf("%f", &friend->height);
		printf("4. ������: ");
		scanf("%f", &friend->weight);
		printf("Done\n\n");
		return 1;
	}else {
		printf("�ִ� �ο��ʰ�! �ִ� %d������� ���� �����մϴ�.\n", MAX);
	}
	return 0;
}

void ShowFriend(Person* friend, int count)
{
	int i;
	if (count > 0) {
		printf("\n��ϵ� ģ�� ���\n");
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
		printf("   [�޴�]   \n");
		printf("=================\n");
		printf("1. ģ���߰�  \n");
		printf("2.  ģ�����  \n");
		printf("3.  ����  \n");
		printf("=================\n");
		printf(" ��ȣ ����: ");
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
			printf("1~3 ��ȣ�� ���� �����մϴ�.\n\n");
		}
	}
}