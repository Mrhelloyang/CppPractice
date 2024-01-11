#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person {
public:
	void showClassName()
	{
		cout << "this is class person" << endl;
	}
	void showAge()
	{
		cout << "年龄为:" << m_Age << endl;//这里编译器会把m_Age==this->m_Age;//this 为空所以执行失败,this 是 nullptr。
	}

	int m_Age;
};
void test()
{
	Person* P = NULL;
	//P->showClassName();//空指针可以调用成员函数
	P->showAge();//err
}
int main()
{

	test();
	return 0;
}