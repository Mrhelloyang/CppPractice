#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	int m_Age;
	string m_Name;
};
template<typename T>
bool mycompare(T& P1, T& P2)
{
	if (P1 == P2)//err
	{
		return true;
	}
	else
	{
		return false;
	}
}
//特定的类型提供具体化的模板
//具体化优先于常规模板
template<> bool mycompare(Person& P1, Person& P2)
{
	if (P1.m_Age == P2.m_Age && P1.m_Name == P2.m_Name)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	Person P1("tom", 11);
	Person P2("tom", 11);
	int ret = mycompare(P1, P2);
	if (ret)
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
}
int main()
{ 
	test01();
	return 0;
}