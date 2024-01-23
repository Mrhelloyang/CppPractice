#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
template<class T>
class Base {
public:
	T m;
};
class Son1 :public Base<int>
{

};
template<class T1, class T2>
class Son2 :public Base<T2>
{
	T1 obj;
};
int main()
{
	Son2<int, int >P1;

	return 0;
}