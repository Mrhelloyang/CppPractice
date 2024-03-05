#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(10);
	v.push_back(20);
	v.push_back(10);
	v.push_back(50);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	// 查找相邻重复元素,返回相邻元素的第一个位置的迭代器
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end()) {
		cout << "找不到!" << endl;
	}
	else {
		cout << "找到相邻重复元素为:" << *it << endl;
	}
	return 0;
}