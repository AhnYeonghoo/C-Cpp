/*#include <stdio.h>

void main()
{
	char data[3][4] = { {0,0,2,0}, {1,1,0,0}, {2,1,0,2} };
	int x, y;
	
	for (y = 0; y < 3; y++) {
		for (x = 0; x < 4; x++)   {
			printf("%d�� %d����  ", y + 1, x + 1);
			if (data[y][x] == 1) printf("���� ���� ���� �ֽ��ϴ�\n  ");
			else if (data[y][x] == 2) printf("�� ���� ���� �ֽ��ϴ�.\n  ");
			else printf("�� ���� ���� ���� �ʽ��ϴ�.\n  ");

		}
	}
	}*/       

//2���� �迭�� �ٵϵ� ���� ���α׷� ���� (array)




/*
#include <stdio.h>

void Swap(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void main()
{
	int start = 95, end = 5;
	printf("befor : start = %d, end = %d\n", start, end);
	if (start > end) {
		Swap(&start, &end);
	}
	printf("after : start = %d, end = %d\n", start, end);
}*/

// �ſ� �߿��� �����͸� �̿��� Swap�Լ� ����� ����





/*
#include <stdio.h>
int GetData(void* p_data, char type)
{
	int result = 0;
	if (type == 1) result = *(char*)p_data;
	else if (type == 2) result = *(short*)p_data;
	else if (type == 3) result = *(int*)p_data;
	return result;
}

void main()
{
	int data = 0x12345678;
	printf("%X\n", GetData(&data, 3));
}
*/
// void(���������� �ʴ�)�� �����ͷ� ��� �޸��� ũ�� �����ϱ� ����




#include <stdio.h>
int Average(void* pa, void* pb)
{
	int A;
	A = (*(int*)pa + *(int*)pb) / 2;
	
}
int main()
{
	int a, b, sum;
	printf("�� ���� �Է��ϼ���.  :      \n");
	scanf_s("%d %d", &a, &b);
	sum = Average(&a, &b);
	printf("�� ���� �������� %d�Դϴ�. ", sum);
}