#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<list>
using namespace std;
void printlist(const list<int>& L)//遍历容器
{
	for (list<int>::const_iterator lit = L.begin(); lit != L.end(); lit++)
	{
		cout << *lit << " ";
	}
	cout << endl;
}
void test01()
{
	list<int>L1;//默认构造
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int>L2;
	L2 = L1;//operator=重载
	printlist(L2);
	list<int>L3;
	L3.assign(L1.begin(), L1.end());
	printlist(L3);
	list<int>L4;
	L4.assign(10, 100);//几个elem
	printlist(L4);
	L4.swap(L1);
	printlist(L4);
	printlist(L1);
}
int main()
{
	test01();
	return 0;
}