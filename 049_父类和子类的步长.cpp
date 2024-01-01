#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
class parent
{
public:
	int a = 10;
	int b = 11;
	virtual void print()
	{
		cout << "a=" << a << "b=" << b << endl;
	}
protected:
private:
};
class child :public parent
{
public:
	int b = 12;
	int c = 13;
	virtual void print()
	{
		cout << "b=" << b << "c=" << c << endl;
	}
protected:
private:
};
void main()
{
	parent p1;
	child c1[3];
	parent* p;
	p = &p1;
	p->print();
	p = c1;
	child* c = c1;
	p->print();
	c->print();

	p++;
	c++;
	//p->print();//err,步长
	c->print();
	cout << "hello..." << endl;
	system("pause");
}