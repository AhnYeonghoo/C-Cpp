#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char argv[])
{
	int i, n, j, temp, arr[100];
	printf("Enter the number of integers>>  ");
	scanf("%d", &n);
	printf("Enter integers>> ");
	for (i = 0; i < n; i++)scanf("%d", &arr[i]);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("After sorting: ");
	for (i = 0; i < n; i++)printf("%d ", arr[i]);
}