#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
class A
{
	/*A()
	{
		cout << "构造函数" << endl;//私有的构造函数，子类不能使用；
	}*/
public:
	static int a;
	int b;
protected:
private:
};
int A::a = 100;//告诉c++编译器分配内存；并只是赋值；
class B :private A
{
public:
	int b;
	int c;
	void getchild()
	{
		cout << "b" << b << endl;
		cout << "a" << a << endl;
	}
protected:
private:
};

void main()
{

	A a1;
	B b1;
	b1.getchild();
	cout << "hello..." << endl;
	system("pause");
}