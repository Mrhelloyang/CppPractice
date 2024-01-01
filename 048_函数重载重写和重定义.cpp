#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
class parent
{
public:
	void abc()
	{

	}
	void func()
	{
		cout << 1 << endl;
	}
	void func(int i)
	{
		cout << 2 << endl;
	}
	void func(int i, int j)
	{
		cout << 3 << endl;
	}
protected:
private:
};
class child :public parent
{
public:
	void abc()
	{
		//这个和父类的函数abc是重定义//没有virtual,名字相同就是重定义,要在两个不同的类里面
	}

	virtual void func(int i, int j)//在一个类里面多个函数名相同返回值相同，其他不同的就是函数重载
	{
		cout << 4 << endl;
	}
	void func(int i, int j, int k)//重写发生在两个类里面，会发生多态；
	{
		cout << 5 << endl;
	}
protected:
private:
};
void main()
{
	child c1;
	//c1.func();//err子类中有同名函数，默认在子类里面找
	c1.parent::func();
	cout << "hello..." << endl;
	system("pause");
}