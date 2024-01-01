#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

class parent
{
public:
	int a = 1;
	int b = 11;
	void print()
	{
		cout << "我是父类" << endl;
	}
protected:
private:
};
class child :public parent
{
public:
	int b;
	int c = 22;
	void print()
	{
		cout << "我是子类" << endl;
	}
protected:
private:
};
void main()
{
	parent p1;
	child c1;
	cout << p1.a << endl;
	cout << p1.b << endl;
	c1.b = 10;//默认是操作子类的b
	c1.parent::b = 12;//操作父类，就要加域
	cout << p1.b << endl;
	cout << c1.b << endl;
	p1.print();
	c1.print();//默认是这个，操作自己的函数；
	c1.parent::print();
	cout << "hello..." << endl;
	system("pause");
}