#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class MyInteger {
	friend ostream& operator<<(ostream& out, MyInteger myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}
	//前置++，先++，再返回；
	MyInteger& operator++()
	{
		m_Num++;
		return *this;
	}
	//后置++，先用一个临时变量保存，再++，最后再返回临时变量，
	MyInteger operator++(int)
	{
		MyInteger temp = *this;
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};
//这句话为什么后面用值传递不用引用，因为后置++返回值，
ostream& operator<<(ostream& out, MyInteger myint)
{
	out << myint.m_Num;
	return out;
}
void test01()
{
	MyInteger myint;
	cout << myint << endl;
	cout << ++myint << endl;
	cout << myint++ << endl;
}

int test02()
{
	int a = 10;
	cout << &a << endl;
	return a;
}
int main()
{
	test01();
	int a = test02();
	cout << test02() << endl;
	//cout << a << endl;
	return 0;
}