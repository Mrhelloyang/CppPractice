#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<map>
#include<string>
class MyCompare {
public:
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};
void test01()
{
	map<int, int, MyCompare>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(5, 50));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));
	for (map<int, int, MyCompare>::iterator it = m1.begin(); it != m1.end(); it++)
	{
		cout << "key= " << it->first << " value= " << it->second << endl;
	}
}

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
class mycompare {
public:
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};
void test02()
{
	Person P1("唐僧", 18);
	Person P2("孙悟空", 590);
	Person P3("八戒", 1000);
	Person P4("沙僧", 2300);
	map<int, Person, mycompare>M;
	M.insert(pair<int, Person>(1, P1));
	M.insert(pair<int, Person>(2, P2));
	M.insert(pair<int, Person>(3, P3));
	M.insert(pair<int, Person>(4, P4));
	for (map<int, Person, mycompare>::iterator it = M.begin(); it != M.end(); it++)
	{
		cout << "姓名:" << it->second.m_name << " 年龄 " << it->second.m_age << endl;
	}
}
class mycompare1 {
public:
	bool operator()(const Person& p1, const Person& p2)const
	{
		return p1.m_age > p2.m_age;
	}
};
void test03()
{
	Person P1("唐僧", 18);
	Person P2("孙悟空", 590);
	Person P3("八戒", 1000);
	Person P4("沙僧", 2300);
	map< Person, int, mycompare1>M;
	M.insert(pair< Person, int>(P1, 1));
	M.insert(pair< Person, int>(P2, 20));
	M.insert(pair< Person, int>(P3, 2));
	M.insert(pair< Person, int>(P4, 4));
	for (map< Person, int, mycompare1>::iterator it = M.begin(); it != M.end(); it++)
	{
		cout << "姓名:" << it->first.m_name << " 年龄 " << it->first.m_age << endl;
	}
}
int main()
{
	test01();
	test02();
	test03();
	return 0;
}