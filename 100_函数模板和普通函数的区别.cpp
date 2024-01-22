#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//普通函数调用时可以发生自动类型转换（隐式类型转换）
//函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
//如果利用显示指定类型的方式，可以发生隐式类型转换
int add01(int a, int b)
{
	return a + b;
}
template<typename T>
T add02(T a, T b)
{
	return a + b;
}
int main()
{
	int a = 10;
	int b = 20;
	char c = 'c';//c的asciI码为99
	cout << add01(a, c) << endl;
	//cout << add02(a, c) << endl;//自动类型推导不能发生隐式类型转换
	cout << add02<int>(a, c) << endl;
	return 0;
}