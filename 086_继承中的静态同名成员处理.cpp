#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Base {
public:
	static int a;
	static void func()
	{
		cout << "base的func()调用" << endl;
	}
};
int Base::a = 100;
class Son :public Base {
public:
	static int a;
	static void func();
};
int Son::a = 200;
void Son::func()
{
	cout << "son的func()调用" << endl;
}
void test01()
{
	Son S1;
	//通过对象访问
	cout << S1.a << endl;
	cout << S1.Base::a << endl;
	S1.func();
	S1.Base::func();
	//通过类名访问
	Son::func();
	//第一个::是用类名来访问，第二个::是访问父类作用域下。
	Son::Base::func();
}
void test02()
{

}
int main()
{
	test01();
	//test02();
	return 0;
}