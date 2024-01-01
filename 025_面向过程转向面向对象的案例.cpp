#include"iostream"
using namespace std;

class mycube
{
public:
	int m_a;
	int m_b;
	int m_c;
	int m_s;
	int m_v;
public:
	void seta(int a)
	{
		m_a = a;
	}
	void setb(int b)
	{
		m_b = b;
	}
	void setc(int c)
	{
		m_c = c;
	}
	void setabc(int a, int b, int c)
	{
		m_a = a, m_b = b, m_c = c;
	}
public:
	int getS()
	{
		m_s = 2 * (m_a * m_b + m_a * m_c + m_b * m_c);
		return m_s;
	}
	int getV()
	{
		m_v = m_a * m_b * m_c;
	}
public:
	int juget(mycube& c2)
	{
		if ((m_a == c2.geta()) &&
			(m_b == c2.getb()) &&
			(m_c == c2.getc()))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
public:
	int geta()
	{
		return m_a;
	}
	int getb()
	{
		return m_b;
	}
	int getc()
	{
		return m_c;
	}
};


void main()
{
	mycube c1, c2;
	c1.setabc(5, 6, 7);//定义一个正方形的长宽高
	c2.setabc(5, 6, 7);
	int ret = c1.juget(c2);//判断是否相同
	if (ret == 1)
	{
		cout << "是相等的" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
	system("pause");
}
