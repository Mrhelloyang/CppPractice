#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		//merge合并时需要两个容器也是有序的
		v1.push_back(i);
		v2.push_back(i + 1);
	}
	vector<int>vTarget;
	//空间需要提前分配
	vTarget.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), vTarget.end(), myprint);
}
void main()
{
	test01();
}