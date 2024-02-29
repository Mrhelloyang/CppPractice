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
	m1.insert(make_pair(2, 20));
	m1.insert(map<int, int>::value_type(3, 30));
	m1[4] = 40;//不建议用这种插入，可以用来查找，
	cout << m1[5] << endl;//如果没有查询到会自动添加一个
	printMap(m1);
	m1.erase(2);//key
	printMap(m1);
	m1.erase(m1.begin());
	//m1.erase(m1.begin(), m1.end());
	m1.clear();
	printMap(m1);
}
int main()
{
	test01();


	return 0;
}