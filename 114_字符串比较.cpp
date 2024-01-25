#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
void test01()
{
	string str1 = "hello";
	string str2 = "hello";
	if (str1.compare(str2) == 0)//等于0时两个字符串相等
	{
		cout << "str1==str2" << endl;
	}
	else
	{
		cout << "str1!=str2" << endl;
	}
}
int main()
{
	test01();

	return 0;
}