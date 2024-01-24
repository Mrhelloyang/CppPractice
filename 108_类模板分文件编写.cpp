#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//#include"108_Person1.h"//模板类的成员函数创建时机在调用阶段，只有调用的才执行模板类的成员函数，导致分文件差找不到
//方法一直接包含类的源文件
#include"108_Person1.cpp"
//直接把类的模板声明和实现写在同一个文件中，后缀为.hpp的头文件
#include"108_Person.hpp"

int main()
{
	Person<string, int>P("jerry", 18);
	P.showPerson();
	Person<string, int>P("jerry", 18);
	P.showPerson();

	return 0;
}