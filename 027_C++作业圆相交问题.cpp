#include"iostream"
#include"math.h"
using namespace std;

//class point
//{
//public:
//	double x1, y1;
//public:
//	void setxy(double _x1, double _y1)
//	{
//		x1 = _x1;
//		y1 = _y1;
//	}
//	double getx()
//	{
//		return x1;
//	}
//	double gety()
//	{
//		return y1;
//	}
//	double sizeoflong(point& p2)
//	{
//		double d = sqrt((x1 - p2.getx()) * (x1 - p2.getx()) + (y1 - p2.gety()) * (y1 - p2.gety()));
//		return d;
//	}
//};

class circle
{
public:
	double r, x0, y0;
public:
	void setRXY(double _r, double _x0, double _y0)
	{
		x0 = _x0;
		y0 = _y0;
		r = _r;
	}
	double getx()
	{
		return x0;
	}
	double gety()
	{
		return y0;
	}
	double getr()
	{
		return r;
	}
	double judge(circle& c2)
	{
		double d = sqrt((x0 - c2.getx()) * (x0 - c2.getx()) + (y0 - c2.gety()) * (y0 - c2.gety()));
		if (d <= (r + c2.getr()))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

};

//void main01()
//{
//	point p1, p2;
//	p1.setxy(1, 2);
//	p2.setxy(6, 9);
//	double ret = p1.sizeoflong(p2);
//	printf("%lf\n", ret);
//
//}
void main()
{
	circle c1, c2;
	c1.setRXY(5, 1, 2);
	c2.setRXY(5, 2, 2);
	double ret = c1.judge(c2);
	if (ret == 1)
	{
		printf("两个圆相交");
	}
	else
	{
		printf("两个圆不相交");
	}

}