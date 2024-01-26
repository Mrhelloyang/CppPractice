#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
int main()
{
	vector<int>V;
	for (int i = 0; i < 10; i++)
	{
		V.push_back(i + 1);
	}
	for (int i = 0; i < V.size(); i++)
	{
		cout << V[i] << " ";//第一种方式通过[]来访问
	}
	cout << endl;
	//通过at来访问
	for (int i = 0; i < V.size(); i++)
	{
		cout << V.at(i) << " ";//第一种方式通过[]来访问
	}
	cout << endl;
	//通过front()可以访问第一个元素；
	cout << V.front() << endl;
	cout << *V.begin() << endl;
	//通过back()可以访问最后一个元素；
	cout << V.back() << endl;
	cout << *(V.end() - 1) << endl;
	return 0;
}