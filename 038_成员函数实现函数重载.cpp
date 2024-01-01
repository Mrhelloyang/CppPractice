#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

class test
{
public:
	test(int _a = 0, int _b = 0)
	{
		a = _a;
		b = _b;
	}
	void printT()
	{
		cout << "a=" << a << "  b" << b << endl;
	}
	test operator-(test& t2)//操作符重载；
	{
		test tmp(this->a - t2.a, this->b - t2.b);
		return tmp;
	}
protected:
public:
	int a;
	int b;
};
void main()
{

	test t1(2, 4), t2(3, 6);
	test t3 = t1 - t2;
	t3.printT();
	cout << "hello..." << endl;
	system("pause");
}