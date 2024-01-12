#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person {

	friend void test();
public:
	Person(int age)
	{
		this->m_age = new int(age);
	}
	/*Person(Person& P)
	{
		this->m_age = new int(*P.m_age);
	}*/
	Person& operator=(Person& P)
	{
		this->m_age = new int(*P.m_age);
		return *this;
	}
	~Person()
	{
		//编译器会提供一个浅拷贝的拷贝构造函数，写析构函数的话可能会出现，内存重复释放的问题，用深拷贝就可以解决
		delete m_age;
		m_age = NULL;
	}
private:
	int* m_age;
};
void test()
{
	Person P1(10);
	cout << "P1的年龄：" << *P1.m_age << endl;
	Person P2(20);
	cout << "P2的年龄：" << *P2.m_age << endl;
	Person P3 = P2;
	cout << "P3的年龄：" << *P3.m_age << endl;
	P3 = P2 = P1;//符号函数重载返回引用的话就可以继续执行;
	cout << "P1的年龄：" << *P1.m_age << endl;
	cout << "P2的年龄：" << *P2.m_age << endl;
	cout << "P3的年龄：" << *P2.m_age << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}