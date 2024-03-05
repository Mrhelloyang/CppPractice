#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

class Person {
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;

	}
	string m_name;
	int m_age;
};
class greater20 {
public:
	bool operator()(const Person& P)
	{
		return P.m_age > 20;
	}
};
void test01()
{
	vector<Person>v;
	Person P1("aaa", 10);
	Person P2("bbb", 20);
	Person P3("ccc", 30);
	Person P4("ddd", 40);
	v.push_back(P1);
	v.push_back(P2);
	v.push_back(P3);
	v.push_back(P4);
	vector<Person>::iterator it = find_if(v.begin(), v.end(), greater20());
	if (it == v.end())
	{
		cout << "没有找到!" << endl;
	}
	else
	{
		cout << "找到姓名:" << it->m_name << " 年龄: " << it->m_age << endl;
	}
}
int main()
{
	test01();

	return 0;
}