#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class MyPrint {
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void test01()
{
	MyPrint myprint;
	myprint("hello world!!");
}
class Myadd {
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
void test02()
{
	Myadd myadd;
	int ret = myadd(100, 99);//仿函数
	cout << "ret=" << ret << endl;
	cout << "Myadd()(100,100) = " << Myadd()(100, 100) << endl;
	//匿名对象，调用完毕立即自动释放
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}