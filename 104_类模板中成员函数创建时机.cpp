#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//普通类中成员函数一开始就创建。
//类模板中的成员函数只有调用时才创建。
class Person1 {

public:
	void showPerson1()
	{
		cout << "showPerson1" << endl;
	}
};
class Person2 {

public:
	void showPerson2()
	{
		cout << "showPerson2" << endl;
	}
};
template <class T>
class MyClass
{
public:
	T obj;
	void func1()
	{
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}
};
void test01()
{
	MyClass<Person1>P1;
	P1.func1();
	P1.func2();//err
}
int main()
{
	test01();

	return 0;
}