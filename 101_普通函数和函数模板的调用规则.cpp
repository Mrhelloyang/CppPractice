#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//同名普通函数与函数模板，优先调用普通函数。
//可以通过空模板参数列表来强制调用函数模板。
//如果函数模板可以产生更好的匹配, 优先调用函数模板
//函数模板可以函数重载
void myPrint(int a, int b)
{
	cout << "普通函数的调用" << endl;
}
template<typename T>
void myPrint(T a, T b)
{
	cout << "函数模板的调用" << endl;
}
template<typename T>
void myPrint(T a, T b, int c)
{
	cout << "函数模板重载的调用" << endl;
}
void test01()
{
	int a = 10;
	int b = 20;
	myPrint(a, b);
	myPrint<>(a, b);
	char c = 'c';
	char d = 'd';
	myPrint(c, d);//如果是普通函数的话，需要进行隐式类型转换
	myPrint(c, d, 100);
}
int main()
{
	test01();

	return 0;
}