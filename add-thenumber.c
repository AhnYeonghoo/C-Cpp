#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[1000];
	while (1) {
		int i, temp = 0, sum = 0;
		printf("Enter a line>> ");
		gets(str);
		if (str[0] == '0' && str[1] == NULL)break;
		for (i = 0; i < strlen(str); i++) {
			if (str[i] >= '0' && str[i] <= '9') {
				temp *= 10;
				temp = temp + str[i] - '0';
			}
			else {
				sum += temp;
				temp = 0;
			}
		}
		sum += temp;
		printf("  The sum of all numbers: %d\n\n\n", sum);
	}
	return 0;
}