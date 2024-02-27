#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
using namespace std;

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
int main()
{
	queue<Person> P;
	Person p1("唐僧", 10);
	Person p2("猪八戒", 20);
	Person p3("沙僧", 30);
	Person p4("孙悟空", 40);
	P.push(p1);
	P.push(p2);
	P.push(p3);
	P.push(p4);
	while (!P.empty())
	{
		cout << "队头姓名" << P.front().m_name << " 队头年龄" << P.front().m_age;
		cout << " 队尾姓名" << P.back().m_name << " 队尾年龄" << P.back().m_age << endl;
		P.pop();
	}
	return 0;
}