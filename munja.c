#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[1000], str2[1000], * p;
	while (1)
	{
		printf("Enter two strings>> ");
		scanf("%s", str);
		if (strcmp(str, "quit") == 0)break;
		scanf("%s", str2);
		int sum = 0;
		if (strcmp(str, "quit") == 0)break;
		p = str;
		while (1)
		{
			if (strcmp(str, "quit") == 0)break;
			p = strstr(p, str2);
			if (p != NULL) {
				sum++;
				p += strlen(str2);
			}
			else {
				break;

			}
			printf("  %d\n\n\n", sum);

		}
	}
}