#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

class TransFrom
{
public:
	int operator()(int val)
	{
		return val + 100;
	}
};
class Myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
int main()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>vTarget;
	vTarget.resize(v.size());//提前分配空间
	transform(v.begin(), v.end(), vTarget.begin(), TransFrom());
	for_each(vTarget.begin(), vTarget.end(), Myprint());
	return 0;
}