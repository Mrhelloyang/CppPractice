#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<ctime>
void myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myprint);
}

int main()
{
	srand((unsigned int)time(NULL));
	return 0;
}