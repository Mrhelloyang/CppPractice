#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

class test
{
public:
	void set(int _a, int _b)
	{
		a = _a;
		b = _b;
	}
	static void getc()
	{
		cout << c << endl;
	}
	int geta()
	{
		return a;
	}
	int getb()
	{
		return b;
	}
protected:
private:
	int a;
	int b;
	static int c;
};
int test::c = 10;
void main()
{
	test t1, t2, t3, t4;
	t1.set(2, 3);
	cout << t1.geta() << "b =" << t1.getb() << endl;
	test::getc();

	cout << "hello..." << endl;
	system("pause");
}