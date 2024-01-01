#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int& func1()
{
	int a = 10;
	return a;
}
int& func2()
{
	static int a = 20;//静态全局变量，整个程序执行完才释放；
	return a;
}


int main()
{
	int& ret = func1();
	cout << ret << endl;
	cout << ret << endl;//这个版本的vs已经发生改变了，以前是保留一次；

	int& b = func2();
	cout << b << endl;
	cout << b << endl;

	func2() = 30;
	cout << b << endl;
	cout << b << endl;
	return 0;
}