#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class First {
public:
	virtual void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First{
public:
	virtual void MyFunc() { cout << "SecondFunc" << endl; }

};

class Third : public Second {
public:
	virtual void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main(void)
{
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();  //오버라이딩 된 함수들이 모두 가상함수이고 서로 상속해있기 때문에 			
	delete tptr;     // 가장 마지막으로 오버라이딩 된 함수만을 호출함.
	return 0;

}