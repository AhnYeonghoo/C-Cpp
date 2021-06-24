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
	Book(const char* title, const char* isbn, int value) //���� ������ 
		:price(value)
	{
		this->title = new char[strlen(title) + 1];
		this->isbn = new char[strlen(isbn) + 1];
		strcpy(this->title, title);
		strcpy(this->isbn, isbn);
	}
	void ShowBookInfo() //���� �����ִ� �Լ� 
	{
		cout << "����:  " << title << endl;
		cout << "ISBN:  " << isbn << endl;
		cout << "����:  " << price << endl;
	}
	~Book() //�Ҹ���
	{
		delete[]title;
		delete[]isbn;
	}
};

class Ebook : public Book  //����å�� å�� �����̹Ƿ� ����� ����
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
		ShowBookInfo(); //���� ���� ���� �Լ� ȣ��
		cout << "����Ű:  " << DRMKey << endl;
	}
	~Ebook()
	{
		delete[]DRMKey; // �Ҹ��� 
	}
};

int main(void)
{
	Book book("���� C++", "555-12345-222", 20000);//Book Ŭ���� ������ ȣ��
	book.ShowBookInfo(); //���� �����Լ� ȣ��
	cout << endl;
	Ebook ebook("���� c++", "555-12345-222", 10000, "fdx9w018kiw"); //Ebook Ŭ���� ������ ȣ��
	ebook.ShowEbookInfo();
	return 0;
}