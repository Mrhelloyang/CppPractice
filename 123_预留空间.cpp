#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
void test01()
{
	vector<int>v;
	v.reserve(100000);//预留空间是分配()里面大小的空间，不会多分配，减少重复分配空间
	cout << v.capacity() << endl;
	int num = 0;//用num统计重新分配空间的次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num=" << num << endl;
}
void print(const vector<int>& v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
}
void test02()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	v[3] = 10;
	print(v);

}
int main()
{
	test01();
	test02();
	return 0;
}