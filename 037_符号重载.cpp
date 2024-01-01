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
		cout << "a=" << a << "b" << b << endl;
	}
protected:
public:
	int a;
	int b;
};
test operator+(test& t1, test& t2)//操作符重载；
{
	test tmp(t1.a + t2.a, t1.b + t2.b);
	return tmp;
}
void main()
{
	test t1(2, 4), t2(3, 6);
	test t3 = t1 + t1;
	t3.printT();
	cout << "hello..." << endl;
	system("pause");
}