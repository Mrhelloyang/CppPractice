#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Person {

public:
	Person()//构造函数，可以有参数，没有返回值，没有void
	{
		cout << "构造函数执行" << endl;
	}
	~Person()//析构函数，没有参数，没有返回值，没有void
	{
		cout << "析构函数执行" << endl;
	}
};

void test()
{
	Person p1;//这是栈区，执行完就释放了
}
int main()
{
	//test();
	Person p1;//要等函数结束才释放栈区，调用析构函数
	system("pause");
	return 0;
}