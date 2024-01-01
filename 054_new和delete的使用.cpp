#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int* func()
{
	int* p = new int(10);
	return p;
}
int* func2()
{
	int* p = new int[20];
	return p;
}
int main()
{
	int* p = func();
	cout << *p << endl;
	delete p;
	int* arr = func2();
	delete[] arr;//中间要写[]不然只是释放了以一个首地址的元素；
	return 0;
}