#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
using namespace std;
//大小
void printSet(const set<int>& S)
{
	for (set<int>::iterator it = S.begin(); it != S.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	if (s1.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
		cout << "容器大小为：" << s1.size() << endl;
	}
}
//交换
void test02()
{
	set<int> s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int> s2;

	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(400);

	cout << "交换前" << endl;
	printSet(s1);
	printSet(s2);
	s1.swap(s2);
	cout << "交换后" << endl;
	printSet(s1);
	printSet(s2);


}
int main()
{
	test01();
	test02();
	return 0;
}