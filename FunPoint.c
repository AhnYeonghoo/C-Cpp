#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//2021040016 안영후
unsigned char ResetBit(unsigned char dest, unsigned char bit)
{
	if (bit < 8) dest = dest & ~(0x01 << bit);
	return dest;
}
void main()
{
	unsigned char lamp; //8바이트를 온전히 사용하기 위해 부호없는 char형 변수 선언
	unsigned char n;
	printf("16진수 입력-->>");
	scanf("%X", &lamp);
	printf("변환할 비트의 자릿수 입력-->> ");
	scanf("%X", &n);
	lamp = ResetBit(lamp, n);
	printf("%x\n", lamp);
}