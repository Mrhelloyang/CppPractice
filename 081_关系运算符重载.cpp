#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

class Person {
public:
	Person(string name, int age)
	{
		m_Age = age;
		m_Name = name;
	}
	bool operator==(Person& P)
	{
		if (this->m_Age == P.m_Age && this->m_Name == P.m_Name)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

private:
	int m_Age;
	string m_Name;
};
void test01()
{
	Person P1("晓明", 18);
	Person P2("晓明", 18);
	if (P1 == P2)
	{
		cout << "P1和P2相等" << endl;
	}
	else
	{
		cout << "P1和P2不相等相等" << endl;
	}
}
int main()
{
	test01();
	return 0;
}