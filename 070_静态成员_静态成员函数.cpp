#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person {


public:
	int m_b;//只有静态成员变量属于，类的对象上，非静态成员函数，静态成员变量，静态成员函数都不属于，只有一份
	static int m_a;
	static void func()
	{
		m_a = 1000;//静态成员函数只可以访问静态成员变量；
		//m_b = 100;//静态成员函数无法访问，非静态成员变量，因为非静态成员变量m_b属于定义的某一个对象;
		cout << "static void func()函数调用" << endl;
	}

};
int Person::m_a = 10;
int main()
{
	//静态成员函数访问的两种方式
	//1. 用对象来访问
	Person P1;
	P1.func();
	//2.用类名来访问
	Person::func();
	return 0;
}