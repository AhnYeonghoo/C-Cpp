/*#include <stdio.h>

void main()
{
	char data[3][4] = { {0,0,2,0}, {1,1,0,0}, {2,1,0,2} };
	int x, y;
	
	for (y = 0; y < 3; y++) {
		for (x = 0; x < 4; x++)   {
			printf("%d행 %d열에  ", y + 1, x + 1);
			if (data[y][x] == 1) printf("검은 돌이 놓여 있습니다\n  ");
			else if (data[y][x] == 2) printf("흰 돌이 놓여 있습니다.\n  ");
			else printf("는 돌이 놓여 있지 않습니다.\n  ");

		}
	}
	}*/       

//2차원 배열로 바둑돌 놓는 프로그램 예제 (array)




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

// 매우 중요한 포인터를 이용한 Swap함수 만들기 예제





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
// void(정해져있지 않다)형 포인터로 대상 메모리의 크기 조절하기 예제




#include <stdio.h>
int Average(void* pa, void* pb)
{
	int A;
	A = (*(int*)pa + *(int*)pb) / 2;
	
}
int main()
{
	int a, b, sum;
	printf("두 수를 입력하세요.  :      \n");
	scanf_s("%d %d", &a, &b);
	sum = Average(&a, &b);
	printf("두 값의 산술평균은 %d입니다. ", sum);
}