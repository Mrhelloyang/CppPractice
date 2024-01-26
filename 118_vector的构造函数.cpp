#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void PrintVector(int val)
{
	cout << val << " ";
}
template<typename T>
void For_Each(vector<T> V)
{
	for_each(V.begin(), V.end(), PrintVector);
}
int main()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	For_Each(v1);
	cout << endl;
	vector<int>v2(v1.begin(), v1.end());
	For_Each(v2);
	cout << endl;
	vector<int>v3(10, 99);
	For_Each(v3);
	cout << endl;
	vector<int>v4(v3);
	For_Each(v4);
	cout << endl;
	vector<int>v5 = v3;
	For_Each(v5);
	cout << endl;
	return 0;
}