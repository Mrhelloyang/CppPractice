#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1、所有对象共享同一块数据
//2、编译阶段就分配了空间
//3、类内声明，类外初始化

class Person {
public:
	static int m_a;
private:
	static int m_b;

};
int Person::m_a = 10;//::这个表示作用域
//int Person::m_b = 100;//err
int main()
{
	Person P1;
	cout << P1.m_a << endl;
	Person P2;
	P2.m_a = 20;
	cout << P1.m_a << endl;//静态成员变量不属于某一个对象，只属于这个类下的所有对象

	//通过对象访问静态成员变量
	Person P3;
	P3.m_a = 30;

	//通过类名访问
	Person::m_a = 40;

	//静态成员函数也有访问权限
	//cout << Person::m_b << endl;
	return 0;
}