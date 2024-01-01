#include"iostream"
using namespace std;
class test
{
public:
	test()
	{
		m_a = 0;
		m_b = 0;
	}
	test(int a)
	{
		m_a = a;
		m_b = 0;
	}
	test(int a, int b)
	{
		m_a = a;
		m_b = b;
	}
	test(const test& obj)
	{
		m_a = obj.m_a + 10;
		m_b = obj.m_b + 10;
	}
public:
	int m_a;
	int m_b;
};

void main()
{
	test t3;//这个是无参数那个构造函数；
	//test t1(2, 3);
	//test t1 = (2, 3);//取最后一个；
	test t1(2, 3);
	cout << t1.m_a << t1.m_b << endl;
	test t2 = t1;//自己写的copy
	//test t2(t1);//和上面的等价；
	//test t2;
	//t2 = t1;编译器自动生成的copy
	cout << t2.m_a << t2.m_b << endl;
}
//ctrl+k,ctrl+c注释代码；
//ctrl+k,ctrl+u取消注释；
