#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
class A
{
public:
	A()
	{
		p = new char[20];
		strcpy(p, "helloa");
		cout << "A()" << endl;

	}
	virtual~A()
	{
		delete p;
		cout << "~A()" << endl;
	}
protected:
private:
	char* p;
};
class B :public A
{
public:
	B()
	{
		p = new char[20];
		strcpy(p, "hellob");
		cout << "B()" << endl;

	}
	virtual~B()
	{
		delete p;
		cout << "~B()" << endl;
	}
protected:
private:
	char* p;
};
class C :public B
{
public:
	C()
	{
		p = new char[20];
		strcpy(p, "helloc");
		cout << "C()" << endl;

	}
	virtual~C()
	{
		delete p;
		cout << "~C()" << endl;
	}
protected:
private:
	char* p;
};
void mydelete(A* tmp)
{
	delete tmp;
}
void main()
{
	/*C c1;
	mydelete(&c1);*///err?
	C* myp = new C;
	//mydelete(myp);
	delete myp;

	cout << "hello..." << endl;
	system("pause");
}