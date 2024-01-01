#include"iostream"
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
class test
{
public:
	int m_a;
	int m_b;
public:
	int geta()
	{
		return m_a;
	}
	int getb()
	{
		return m_b;
	}
	test(int a, int b)
	{
		m_a = a;
		m_b = b;
	}
	test(const test& obj)
	{
		m_a = obj.m_a;
		m_b = obj.m_b;
	}
	~test()
	{
		cout << "destory" << endl;
	}
};
test g()
{
	test a(2, 3);
	return a;//因为返回元素a局部对象也是复杂类型，所以编译器函器申请一个匿名对象，先copy给匿名对象，然后再释放a；
}//c++编译器认为函数返回值是类的话是要使用这个类的，局部对象调用完就释放了，所以新分配一个没有名字的空间
void objplay()
{
	//test m(2, 3);
	//m = g();//copy完，匿名对象立刻被析构掉
	test m = g();//需要把匿名对象给释放了，调用了析构函数；//直接把匿名对象名字改为m；不在重新分配空间
	cout << m.geta() << " " << m.getb() << endl;//这一步从后面执行到前面，最后析构m；
	//test y=g();//如果在调用g()就会再执行一遍上面的操作；
}
void main()
{
	objplay();
	cout << "hello..." << endl;
	system("pause");
}
