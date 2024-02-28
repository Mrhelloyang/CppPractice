#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
using namespace std;
void printSet(set<int>& S)
{
	for (set<int>::iterator it = S.begin(); it != S.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int>S;
	//插入
	S.insert(10);
	S.insert(30);
	S.insert(20);
	S.insert(40);
	printSet(S);
	//删除
	S.erase(20);
	printSet(S);
	S.erase(S.begin());//指定迭代器位置也可以删除
	printSet(S);
	//清空
	S.erase(S.begin(), S.end());//删除区间内的数据
	printSet(S);
	S.clear();
	printSet(S);
}
int main()
{
	test01();

	return 0;
}