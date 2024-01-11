#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person {
public:
	//常函数
	void showAge() const //这里加const，为常函数，本质是修饰this指针，就是在Person * const this;前面再加const，*this也不可以修改
	{
		//this指针本质就是一个不可修改的指针常量，指向不可修改，Person * const this;
		//this->m_Age=100;//err
		cout << this << endl;
		m_B = 100;//加上mutable后就可以修改了
	}
	void func()
	{
		m_Age = 100;
	}
	int m_Age;
	mutable int m_B;//特殊变量
};
void test1()
{
	Person P;
	P.showAge();
	cout << &P << endl;
}
void test2()
{
	const Person P;
	//P.m_Age = 1000;//常对象只能修改，特殊变量mutable修饰的
	P.m_B = 100;
	//P.func();//常对象只能调用常函数，因为调用普通成员函数可以修改属性
	Person P2;
	P2.m_B = 100;
}
int main()
{
	test1();
	test2();
	return 0;
}