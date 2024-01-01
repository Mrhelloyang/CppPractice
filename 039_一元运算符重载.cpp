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
		cout << "a=" << a << "  b=" << b << endl;
	}
protected:
public:
	int a;
	int b;
};
//void operator++(test& t1)//操作符重载；
//{
//	/*test tmp(t1.a + 1, t1.b + 1);
//	tmp.printT();*/
//	t1.a++;
//	t1.b++;
//	//return tmp;
//}
test& operator++(test& t1)//前置++
{
	/*test tmp(t1.a + 1, t1.b + 1);
	tmp.printT();*/
	t1.a++;
	t1.b++;
	return t1;
}
test operator++(test& tmp, int)//后置++
{
	/*test tmp(t1.a + 1, t1.b + 1);
	tmp.printT();*/
	tmp.a++;
	tmp.b++;
	return tmp;
}
test& operator--(test& tmp)//前置--
{
	/*test tmp(t1.a + 1, t1.b + 1);
	tmp.printT();*/
	tmp.a--;
	tmp.b--;
	return tmp;
}
test operator--(test& tmp, int)//后置--
{
	/*test tmp(t1.a + 1, t1.b + 1);
	tmp.printT();*/
	tmp.a--;
	tmp.b--;
	return tmp;
}
void main()
{

	test t1(2, 4), t2(3, 6);
	++t1;
	t1.printT();
	--t2;
	t2.printT();
	t2++;
	t2.printT();
	t1--;
	t1.printT();
	cout << "hello..." << endl;
	system("pause");
}