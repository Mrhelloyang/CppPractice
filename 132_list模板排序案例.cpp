#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<list>
using namespace std;

class Person {
public:
	Person(string name, int age, int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}
	string m_name;
	int m_age;
	int m_height;
};
void printList(const list<Person>& L)
{
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << " 身高：" << it->m_height << endl;
	}
}
bool comparePerson(Person& P1, Person& P2)
{
	if (P1.m_age == P2.m_age)//如果年龄相同，按身高降序排序
	{
		return P1.m_height > P2.m_height;
	}
	else
	{
		return P1.m_age < P2.m_age;//按年龄升序
	}
}
void test01()
{
	list<Person>L;
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	printList(L);
	cout << endl;
	L.sort(comparePerson);
	printList(L);
}
int main()
{
	test01();

	return 0;
}