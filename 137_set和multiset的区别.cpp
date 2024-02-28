#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
using namespace std;

void test01()
{
	set<int> S;
	pair<set<int>::iterator, bool>ret = S.insert(10);
	if (ret.second)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}
	ret = S.insert(10);
	if (ret.second)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}
	multiset<int>MS;
	MS.insert(10);
	MS.insert(10);
	for (multiset<int>::iterator it = MS.begin(); it != MS.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	test01();

	return 0;
}