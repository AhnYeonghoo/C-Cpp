#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define length 3

int main(void)
{
	int human;
	int score[3];
	int multiply;
	int result;
	int number[1000];
	int dd[100];
	int ddplus[100];
	scanf("%d", &human); // �� �� ����
	for (int j = 0; j < human; j++)
	{
		scanf("%d", &number[j]);
		for (int i = 0; i < length; i++)
		{
			scanf("%d", &score[i]);
		}
		dd[j] = score[0] * score[1] * score[2];
		ddplus[j] = score[0] + score[1] + score[2];
	}
	//dd[0], dd[1], dd[2], dd[3] //dd[4]...
	for (int i = 0; i < human - 1; i++) {
		for (int j = 0; j < human - 1; j++) {
			if (dd[j] > dd[j + 1]) {
				int tmp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = tmp;
				int tmpdd = dd[j];
				dd[j] = dd[j + 1];
				dd[j + 1] = tmpdd;
				int tmpddplus = ddplus[j];
				ddplus[j] = ddplus[j + 1];
				ddplus[j + 1] = tmpddplus;
			}
			else if (dd[j] == dd[j + 1]) {
				if (ddplus[j] > ddplus[j + 1]) {
					int tmp = number[j];
					number[j] = number[j + 1];
					number[j + 1] = tmp;
					int tmpdd = dd[j];
					dd[j] = dd[j + 1];
					dd[j + 1] = tmpdd;
					int tmpddplus = ddplus[j];
					ddplus[j] = ddplus[j + 1];
					ddplus[j + 1] = tmpddplus;
				} else if (ddplus[j] == ddplus[j + 1]) {
					if (number[j] > number[j + 1]) {
						int tmp = number[j];
						number[j] = number[j + 1];
						number[j + 1] = tmp;
						int tmpdd = dd[j];
						dd[j] = dd[j + 1];
						dd[j + 1] = tmpdd;
						int tmpddplus = ddplus[j];
						ddplus[j] = ddplus[j + 1];
						ddplus[j + 1] = tmpddplus;
					}
				}
			}
		}
	}
	
	
	for (int i = 0; i < length; i++) {
		printf("%d ", number[i]);
	}
	
}