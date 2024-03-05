#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Person {
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	bool operator==(const Person& P)
	{
		if (this->m_name == P.m_name && this->m_age == P.m_age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_name;
	int m_age;
};
//find底层知道如何对比
int main()
{
	//find查找自定义数据类型
	vector<Person>v;
	Person P1("aaa", 10);
	Person P2("bbb", 20);
	Person P3("ccc", 30);
	Person P4("ddd", 40);
	v.push_back(P1);
	v.push_back(P2);
	v.push_back(P3);
	v.push_back(P4);
	Person P5("bbb", 20);
	vector<Person>::iterator pos = find(v.begin(), v.end(), Person("bbb", 20));
	if (pos == v.end())
	{
		cout << "没有查找到" << endl;
	}
	else
	{
		cout << "找到：" << pos->m_name << pos->m_age << endl;
	}
	return 0;
}