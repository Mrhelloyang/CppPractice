#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
template <typename nametype, typename agetype>
class Person {
public:
	Person(nametype name, agetype age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << this->m_Name << " " << this->m_Age << endl;
	}
	nametype m_Name;
	agetype m_Age;
};
//指定传入的类型 — 直接显示对象的数据类型//常用
void printperson(Person<string, int>& p)
{
	p.showPerson();
}
void test01()
{
	Person<string, int>P("孙悟空", 9999);
	printperson(P);
}
//参数模板化 — 将对象中的参数变为模板进行传递
template <typename T1, typename T2>
void printperson2(Person<T1, T2 >& p)
{
	p.showPerson();
	cout << "T1的类型为" << typeid(T1).name() << endl;
	cout << "T2的类型为" << typeid(T2).name() << endl;
}
void test02()
{
	Person<string, int>P("朱八戒", 8888);
	printperson2(P);
}
//整个类模板化 — 将这个对象类型 模板化进行传递
template<typename T>
void printperson3(T& p)
{
	p.showPerson();
	cout << "T的类型为" << typeid(T).name() << endl;
}
void test03()
{
	Person<string, int>P("唐僧", 30);
	printperson3(P);
}
int main()
{
	test01();
	test02();
	test03();
	return 0;
}