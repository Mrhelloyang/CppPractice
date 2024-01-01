#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void printfunc(const int &a)//如果数据很大的话，使用值传递，还要再分配空间，浪费内存，又不要修改实参，就加const
{
	cout<< a << endl;
}

int main()
{
	int a = 100;
	printfunc(a);

	return 0;
}