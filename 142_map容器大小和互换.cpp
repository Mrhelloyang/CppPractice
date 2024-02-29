#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<map>
void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << it->first << " value=" << (*it).second << endl;
	}
}
void test01()
{
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));

	if (m1.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
		cout << "容器大小为：" << m1.size() << endl;
	}
	map<int, int>m2;
	m2.insert(pair<int, int>(5, 50));
	m2.insert(pair<int, int>(6, 60));
	m2.insert(pair<int, int>(7, 70));
	m2.insert(pair<int, int>(8, 80));
	cout << "互换前" << endl;
	printMap(m1);
	printMap(m2);
	m1.swap(m2);
	cout << "互换后" << endl;
	printMap(m1);
	printMap(m2);
}
int main()
{
	test01();


	return 0;
}