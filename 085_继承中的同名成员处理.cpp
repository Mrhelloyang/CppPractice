#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Base {
public:
	Base()
	{
		cout << "base的构造函数调用" << endl;
		m_A = 200;
	}
	~Base()
	{
		cout << "Base的析构函数调用" << endl;
	}
	void func()
	{
		cout << "base的func()调用" << endl;
	}
	int m_A;
};
class Son :public Base {
public:
	Son()
	{
		cout << "son的构造函数调用" << endl;
		m_A = 100;
	}
	~Son()
	{
		cout << "son的析构函数调用" << endl;
	}
	void func()
	{
		cout << "son的func()调用" << endl;
	}
	int m_A;
};
void test01()
{

	Son S1;//先构造父类在构造子类，先析构子类再析构父类；
}
void test02()
{
	Son S2;
	cout << S2.m_A << endl;
	cout << S2.Base::m_A << endl;
	S2.func();
	S2.Base::func();//如果和父类出现同名成员，会隐藏父类的成员，需要加上作用域
}
int main()
{
	//test01();
	test02();
	return 0;
}