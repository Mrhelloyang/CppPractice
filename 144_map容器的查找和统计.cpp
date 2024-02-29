#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<map>
void test01()
{
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));
	map<int, int>::iterator pos = m1.find(4);//查找成功返回迭代器位置，失败返回end()
	if (pos != m1.end())
	{
		cout << "查找成功" << endl;
		cout << "结果为:" << pos->second << endl;
	}
	else
	{
		cout << "查找失败" << endl;
	}
	int num = m1.count(2);//统计key为2的数量
	cout << num << endl;
}
int main()
{
	test01();


	return 0;
}