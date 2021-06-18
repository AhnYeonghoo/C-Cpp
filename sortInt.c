//2021040016_¾È¿µÈÄ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
struct NODE
{
	int data;
	struct NODE* next, * pre;
};
void print(struct NODE* par)
{
	while (par != 0) {
		printf("%d(%x)    ", par->data, par);
		par = par->next;
	}
	printf("\n");
}
int main()
{
	int a, b, c;
	struct NODE* first, * node, * cur;
	first = (struct NODE*)malloc(sizeof(struct NODE));
	printf("Enter integers>> ");
	scanf("%d", &a);
	if (a < 0) return 0;
	first->data = a;
	first->next = 0;
	first->pre = 0;
	while (1) {
		scanf("%d", &a);
		if (a < 0) return 0;
		node = (struct NODE*)malloc(sizeof(struct NODE));
		node->data = a;
		node->next = 0;
		node->pre = 0;
		cur = first;
		while (1) {
			if (cur->data > node->data) {
				node->next = cur;
				node->pre = cur->pre;
				if (cur->pre == 0)first = node;
				else (cur->pre)->next = node;
				cur->pre = node;
				break;
			}
			else {
				if (cur->next == 0) {
					cur->next = node;
					node->pre = cur;
					break;
				}
				else
					cur = cur->next;
			}
		}
		print(first);
	}
}

