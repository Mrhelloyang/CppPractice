#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//多态实现
//抽象计算器类
//多态优点：代码组织结构清晰，可读性强，利于前期和后期的扩展以及维护
class AbstractCalculator
{
public:
	int m_A;
	int m_B;
	virtual int getresult()
	{
		return 0;
	}
};

//加法计算器
class AddCalculator :public AbstractCalculator
{
public:
	int getresult()
	{
		return m_A + m_B;
	}
};

//减法计算器
class SubCalculator :public AbstractCalculator
{
public:
	int getresult()
	{
		return m_A - m_B;
	}
};

//乘法计算器
class MulCalculator :public AbstractCalculator
{
public:
	int getresult()
	{
		return m_A * m_B;
	}
};

void test01()
{
	AbstractCalculator* abc = new AddCalculator;
	abc->m_A = 10;
	abc->m_B = 10;
	cout << abc->getresult() << endl;
}


int main() {

	test01();
	system("pause");
	return 0;
}
