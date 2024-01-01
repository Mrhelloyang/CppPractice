#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


int main()
{
	int a = 10;
	int& b = a;

	int c = 20;
	b = c;//相当于赋值；定义的时候必须初始化，而且不能改；
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}