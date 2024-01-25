#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Person {
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
void print(Person p)
{
	//cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
}
void test01()
{
	//存放自定义数据类型
	vector<Person> v;
	Person p1("张三", 18);
	Person p2("张四", 19);
	Person p3("张五", 20);
	Person p4("张六", 21);
	Person p5("张七", 22);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	for (vector<Person>::iterator begin = v.begin(); begin != v.end(); begin++)
	{
		//cout << "姓名：" << begin->m_Name << " 年龄：" << begin->m_Age << endl;
	}
	for_each(v.begin(), v.end(), print);
}
//存放自定义数据类型指针
void print2(Person* P)
{
	cout << "姓名：" << P->m_Name << " 年龄：" << P->m_Age << endl;
}
void test02()
{
	vector<Person*> v;
	Person p1("张三", 18);
	Person p2("张四", 19);
	Person p3("张五", 20);
	Person p4("张六", 21);
	Person p5("张七", 22);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);
	for (vector<Person*>::iterator begin = v.begin(); begin != v.end(); begin++)
	{
		cout << "姓名：" << (*begin)->m_Name << " 年龄：" << (*begin)->m_Age << endl;
	}
	for_each(v.begin(), v.end(), print2);
}
int main()
{
	test01();
	test02();
	return 0;
}