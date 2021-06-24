#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Book
{
private:
	char* title;
	char* isbn;
	int price;
public:
	Book(const char* title, const char* isbn, int value) //동적 생성자 
		:price(value)
	{
		this->title = new char[strlen(title) + 1];
		this->isbn = new char[strlen(isbn) + 1];
		strcpy(this->title, title);
		strcpy(this->isbn, isbn);
	}
	void ShowBookInfo() //정보 보여주는 함수 
	{
		cout << "제목:  " << title << endl;
		cout << "ISBN:  " << isbn << endl;
		cout << "가격:  " << price << endl;
	}
	~Book() //소멸자
	{
		delete[]title;
		delete[]isbn;
	}
};

class Ebook : public Book  //전자책은 책의 일종이므로 이즈어 관계
{
private:
	char* DRMKey;
public:
	Ebook(const char* title, const char* isbn, int value, const char* key)
		:Book(title, isbn, value)
	{
		DRMKey = new char[strlen(key) + 1];
		strcpy(DRMKey, key);
	}
	void ShowEbookInfo()
	{
		ShowBookInfo(); //기존 정보 제공 함수 호출
		cout << "인증키:  " << DRMKey << endl;
	}
	~Ebook()
	{
		delete[]DRMKey; // 소멸자 
	}
};

int main(void)
{
	Book book("좋은 C++", "555-12345-222", 20000);//Book 클래스 생성자 호출
	book.ShowBookInfo(); //정보 제공함수 호출
	cout << endl;
	Ebook ebook("좋은 c++", "555-12345-222", 10000, "fdx9w018kiw"); //Ebook 클래스 생성자 호출
	ebook.ShowEbookInfo();
	return 0;
}