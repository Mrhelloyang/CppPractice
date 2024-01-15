#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Base {
public:
	virtual void func() = 0;//纯虚函数，
	//类中只要有一个纯虚函数就称为抽象类
	//抽象类无法实例化对象
	//子类必须重写父类中的纯虚函数，否则也属于抽象类
};

class Son :public Base {
public:
	int m_A;
	virtual void func()
	{
		cout << " Son func()" << endl;
	}
};

void test01()
{
	//Base S2;
	//Son S1;//必须重写父类中的纯虚函数，不然也是是抽象类
	Base* S3 = new Son;
	S3->func();

}
int main()
{
	test01();

	return 0;
}