#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person {
public:
	int m_age;
	Person()
	{
		cout << "这是一个默认构造函数" << endl;
	}
	Person(int a)
	{
		cout << "这是一个有参构造函数" << endl;
		m_age = a;
	}
	Person(const Person& P)
	{
		cout << "这是一个拷贝构造函数" << endl;
		m_age = P.m_age;
	}

	~Person()
	{
		cout << "这是一个析构函数" << endl;
	}
};
void dowork1(Person P)
{

}
void test01() {

	Person P;
	dowork1(P);//值传递做函数参数
}
Person test02()
{
	Person P;
	return P;
}
int main()
{
	//Person P1;
	//Person P2(P1);//用一个已创建的对象，拷贝一个新的对象

	//test01();//值传递做函数参数
	Person P = test02();//值方式返回对象
	return 0;
}