#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


int main()
{
	//第一种方式
	pair<string, int>p1("tom", 20);
	cout << "姓名：" << p1.first << " 年龄：" << p1.second << endl;
	//第二种方式
	pair<string, int>p2("jerry", 30);
	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
	return 0;
}