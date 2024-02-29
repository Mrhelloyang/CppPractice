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
	set<int> S1;//默认构造
	S1.insert(10);//set容器只有insert插入数据
	S1.insert(10);
	S1.insert(30);
	S1.insert(30);
	S1.insert(50);
	S1.insert(5);
	printSet(S1);//set容器的实现原理是二叉树，插入的时候会自动排序，set插入重复的数据会不执行
	set<int>S2(S1);//拷贝构造
	printSet(S2);
	set<int> S3;
	S3 = S2;
	printSet(S3);
}

int main()
{
	test01();

	return 0;
}