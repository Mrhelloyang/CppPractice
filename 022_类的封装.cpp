#include"iostream"
using namespace std;

class mycircle
{
public://修饰成员变量和成员函数，能在类的内部和外部使用
	double m_r;
	double m_s;
public:
	void setR(int r)
	{
		m_r = r;
	}
	double getS()
	{
		m_s = 3.14 * m_r * m_r;
		return m_s;
	}
private://修饰成员变量和成员函数,私有，只能在内部使用；
protected://修饰成员变量和成员函数, 私有，只能在内部使用,用在继承里面
};
void main01()
{
	mycircle c1, c2;
	c1.setR(10);
	cout << c1.getS() << endl;

}
class myadvcircle
{
	double a;//不写权限，默认成私有；
private:
	double m_r;
	double m_s;
public:
	void setR(int r)
	{
		m_r = r;
	}
	double getS()
	{
		m_s = 3.14 * m_r * m_r;
		return m_s;
	}
};
void main()
{
	myadvcircle c1, c2;
	//c1.m_r = 10;//err
	c1.setR(20);
	cout << c1.getS() << endl;

}