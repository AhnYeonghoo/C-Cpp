#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

int main(void)
{
	double r;
	cout << fixed;
	cout.precision(6);
	cin >> r;   //��Ŭ���� ������
	cout << pow(r, 2) * 3.1415926535897932 << '\n';

	cout << 2 * pow(r, 2);
	return 0;
}


