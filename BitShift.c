#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//2021040016 �ȿ���
unsigned char ResetBit(unsigned char dest, unsigned char bit)
{
	if (bit < 8) dest = dest & ~(0x01 << bit);
	return dest;
}
void main()
{
	unsigned char lamp; //8����Ʈ�� ������ ����ϱ� ���� ��ȣ���� char�� ���� ����
	unsigned char n;
	printf("16���� �Է�-->>");
	scanf("%X", &lamp);
	printf("��ȯ�� ��Ʈ�� �ڸ��� �Է�-->> ");
	scanf("%X", &n);
	lamp = ResetBit(lamp, n);
	printf("%x\n", lamp);
}