#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//加号重载
class Person {
	//1、成员函数方式
public:
	Person operator + (Person& P)
	{
		Person temp;
		temp.m_A = this->m_A + P.m_A;
		temp.m_B = this->m_B + P.m_B;
		return temp;
	}
public:
	int m_A;
	int m_B;
};
//2、全局函数形式重载+号
//Person operator + (Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
void test()
{
	Person P1;
	P1.m_A = 10;
	P1.m_B = 10;
	Person P2;
	P2.m_A = 20;
	P2.m_B = 20;
	//Person P3 = P1.operator + (P2);//成员函数符号重载的本质是这个
	Person P3 = P1 + P2;//简化版
	cout << "P3.m_A=" << P3.m_A << endl;
	cout << "P3.m_B=" << P3.m_B << endl;
	//全局函数加号重载的本质是Person P4=operator + (P1, P2)
	Person P4 = P1 + P2;//简化版
	cout << "P4.m_A=" << P4.m_A << endl;
	cout << "P4.m_B=" << P4.m_B << endl;
}
int main()
{
	test();

	return 0;
}