#include"iostream"
using namespace std;
class mypoint
{
public:
	double x1;
	double y1;
public:
	void setpoint(double _x1, double _y1)
	{
		x1 = _x1, y1 = _y1;
	}
public:
	double getX1()
	{
		return x1;
	}
	double getY1()
	{
		return y1;
	}
};
class mycircle
{
public:
	double r;
	double x0;
	double y0;
public:
	void setmycircle(double _r, double _x0, double _y0)
	{
		r = _r;
		x0 = _x0;
		y0 = _y0;
	}
public:
	int judge(mypoint& p)
	{
		int dd = ((p.getX1() - x0) * (p.getX1() - x0) + (p.getY1() - y0) * (p.getY1() - y0));
		if (dd <= (r * r))
		{
			return 1;
		}
		else
		{
			return 0;

		}
	}
};
void main()
{
	mycircle c1;
	mypoint p1;
	c1.setmycircle(2, 3, 3);
	p1.setpoint(4, 4);
	int ret = c1.judge(p1);
	if (ret == 1)
	{
		printf("p点在圆内");
	}
	else
	{
		printf("p点不在圆内");
	}
}