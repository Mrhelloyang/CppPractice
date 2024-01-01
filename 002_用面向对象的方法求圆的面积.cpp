#include"iostream"
using namespace std;

struct Cicle
{
	double m_s;
	double m_r;
};//没有加；要加；
class MyCicle
{
public:
	double m_s;
	double m_r;
public:
	void setR(double r)
	{
		m_r = r;
	}
	double getR()
	{
		return m_r;
	}
	double getS()//这里和C语言一样；不要加分号；
	{
		m_s = 3.14 * m_r * m_r;
		return m_s;
	}
};//这个和结构体语法相同；

void main()
{
	MyCicle c1;
	double r;
	cout << "请输入圆的半径：" << endl;
	cin >> r;
	c1.setR(r);
	cout << "圆的面积是:" << c1.getS() << endl;
}
