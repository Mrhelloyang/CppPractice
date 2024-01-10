#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person1 {
public:
	int m_age;
	Person1(int a)
	{
		cout << "这是一个有参构造函数" << endl;
		m_age = a;
	}
};


class Person2 {
public:
	int m_age;
	Person2(const Person2& P)
	{
		cout << "这是一个拷贝构造函数" << endl;
		m_age = P.m_age;
	}
};

class Person3 {
public:
	int m_age;
	Person3()
	{
		cout << "这是一个默认构造函数" << endl;
	}
};

int main()
{
	//Person1 P1;//error，写了有参构造函数，编译器不提供无参构造函数
	//Person1 p2(10);
	//Person1 p3(p2);
	//person2 P4;//写了拷贝构造函数，编译器不提供默认构造函数和有参构造函数
	//Person2 P5;//error
	Person3 P6;
	Person3 P7(P6);
	//Person3 P8(10);//err
	return 0;
}