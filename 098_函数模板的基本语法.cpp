#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;




template<typename T>
void MySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
template<typename T>
void MySwap2()
{
	cout << "MySwap2()调用" << endl;
}
void test01()
{
	int a = 10;
	int b = 20;
	//1、自动类型推导
	MySwap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	double c = 1.1;
	double d = 2.3;
	//显示指定类型
	MySwap<double>(c, d);
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;

}
void test02()
{
	//MySwap2();//err
	MySwap2<int>();//模板必须指定类型
}
int main()
{

	test01();
	test02();
	return 0;
}