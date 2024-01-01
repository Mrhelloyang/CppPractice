#include"iostream"
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
class test
{
public:
	int a;
	int b;
public:
	//test(const test& tmp)
	//{
	//	;//写了copy构造函数，就不会自动产生一个不带参数的构造函数了；
	//}
	test(int a, int b)
	{
		;//写了有参数的构造函数就不会自动产生一个不带参数的构造函数；
	}
};

void main()
{
	//test t1;
	//test t1;
	test t1(1, 2);//一个方法是使用带参数的构造函数，还有一个就是在定义一个不带参数的构造函数；
	cout << "hello..." << endl;
	system("pause");
}