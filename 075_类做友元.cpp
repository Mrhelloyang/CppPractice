﻿#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Building;
class GoodGay {
public:
	GoodGay();
	void visit();
	Building* building;

};

class Building {
	friend class GoodGay;
public:
	Building();
	string m_sittingroom;
private:
	string m_bedroom;
};
GoodGay::GoodGay()
{
	building = new Building;
}
Building::Building()
{
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}
void GoodGay::visit()
{
	cout << "好基友正在访问：" << building->m_sittingroom << endl;
	cout << "好基友正在访问：" << building->m_bedroom << endl;
}
void test01()
{
	GoodGay gg;
	gg.visit();
}
int main() {
	test01();
	system("pause");
	return 0;
}

