#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i, n, res;
	while (1) {
		res = 1;
		printf("Enter an integers>> ");
		scanf("%d", &n);
		if (n == 0)break;
		for (i = 1; i <= n; i++)res *= i;
		printf(" The value of %d! is %d\n", n, res);
		i = 0;
		while (res != 0) {
			res /= 10;
			i++;
		}
		printf("  The number of digits is %d\n\n", i);
	}
	return 0;
}