#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<set>
//自定义数据类型必须指定排序规则
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
class Mycompare
{
public:
	bool operator()(const Person& p1, const Person& p2)const
	{
		return p1.m_age > p2.m_age;
	}
};
void test01()
{

	set<Person, Mycompare>S;
	Person P1("张飞", 32);
	Person P2("刘备", 22);
	Person P3("关羽", 42);
	Person P4("赵云", 19);
	S.insert(P1);
	S.insert(P2);
	S.insert(P3);
	S.insert(P4);
	for (set<Person, Mycompare>::iterator it = S.begin(); it != S.end(); it++) {
		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << endl;
	}

}

int main()
{
	test01();

	return 0;
}