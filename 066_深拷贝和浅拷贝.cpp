#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person {
public:
	int m_age;
	int* m_Height;
	Person(int age, int Height)
	{
		m_age = age;
		m_Height = new int(Height);//这里有一个初始化值为Height;
		//*m_Height = Height;
	}
	Person(const Person& P)
	{
		m_age = P.m_age;
		m_Height = new int(*P.m_Height);
		//*m_Height = *P.m_Height;
	}
	~Person()
	{
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
	}

};
void test1()
{
	Person P1(20, 160);
	Person P2(P1);
	cout << "P1的年龄为：" << P1.m_age << "P1的身高为：" << *P1.m_Height << endl;
	cout << "P2的年龄为：" << P2.m_age << "P2的身高为：" << *P2.m_Height << endl;
}
int main()
{

	test1();
	return 0;
}