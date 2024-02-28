#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
using namespace std;
void test01()
{
	set<int>S;
	//插入
	S.insert(10);
	S.insert(30);
	S.insert(20);
	S.insert(40);
	set<int>::iterator pos = S.find(30);//find()查找成功返回查找到的迭代器，没有查找到返回end()迭代器
	if (pos != S.end())
	{
		cout << "查找到元素" << endl;
		cout << "元素为：" << *pos << endl;
	}
	else
	{
		cout << "没有查找到元素" << endl;
	}
	int num = S.count(30);
	cout << "查找到的个数为：" << num << endl;
}
int main()
{
	test01();

	return 0;
}