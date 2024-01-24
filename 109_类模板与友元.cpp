#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
template <class T1, class T2>
class Person;

template <class T1, class T2>
void showPerson2(Person<T1, T2>& p)
{

	cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
}
//2.全局函数类外实现
//类外实现需要让编译器提前看到，所以全局函数放在前面
//全局函数放在前面的同时，需要再提前看到person类，所以还需要声明person类
template <class T1, class T2>
class Person {
	//1.全局函数在类内实现
	friend void showPerson(Person<T1, T2>& p)
	{
		cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
	}
	friend void showPerson2<>(Person<T1, T2>& p);
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};
void test01()
{
	Person<string, int>P("tom", 20);
	showPerson(P);
	showPerson2(P);
}
int main()
{
	test01();

	return 0;
}