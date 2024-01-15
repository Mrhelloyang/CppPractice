#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Animal {
public:
	int m_Age;
};
class Sheep :virtual public Animal {};
class Tou : virtual public Animal {};//加上virtual，继承方式为虚继承，公共的父类Animal称为虚基类
class SheepTou :public Sheep, public Tou {};
void test01()
{
	SheepTou S1;
	S1.Sheep::m_Age = 10;
	S1.Tou::m_Age = 20;
	cout << "S1.Tou::m_Age=" << S1.Tou::m_Age << endl;
	cout << "S1.Sheep::m_Age=" << S1.Sheep::m_Age << endl;
	//cout << "S1.m_Age" << S1.m_Age << endl;//err
	//加上virtual后
	SheepTou S2;
	S2.Sheep::m_Age = 10;
	S2.Tou::m_Age = 20;
	cout << "S2.Tou::m_Age=" << S2.Tou::m_Age << endl;
	cout << "S2.Sheep::m_Age=" << S2.Sheep::m_Age << endl;
	cout << "S2.m_Age=" << S2.m_Age << endl;
}

int main()
{
	test01();

	return 0;
}