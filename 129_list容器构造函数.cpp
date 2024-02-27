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
	printlist(L1);
	list<int>L2(L1);//拷贝构造
	printlist(L2);
	list<int>L3(L1.begin(), L1.end() );//区间构造
	printlist(L3);
	list<int>L4(10, 100);//几个elem
	printlist(L4);

}
int main()
{
	test01();
	return 0;
}