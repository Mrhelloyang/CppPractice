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
	friend void modify(test* tmp, int a);//写在类的哪里无所谓；
	int  geta()
	{
		return a;
	}
protected:
private:
	int a;
	int b;
};
void modify(test* tmp, int _a)
{
	tmp->a = _a;
}
void main()
{
	test t1;
	cout << "a=" << t1.geta() << endl;
	modify(&t1, 200);
	cout << "a=" << t1.geta() << endl;
	cout << "hello..." << endl;
	system("pause");
}
