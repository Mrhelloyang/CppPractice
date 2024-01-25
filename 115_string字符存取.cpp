#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void test01()
{
	string str = "hello";
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;
	str[0] = 'x';
	str.at(1) = 'o';
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
}
int main()
{
	test01();

	return 0;
}