#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void myprint(int val)
{
	cout << val << " ";
}
int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);
	//从小到大
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myprint);
	//从大到小
	sort(v.begin(), v.end(), greater<int>());
	cout << endl;
	for_each(v.begin(), v.end(), myprint);
	return 0;
}