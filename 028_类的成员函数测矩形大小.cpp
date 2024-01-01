#include"iostream"
using namespace std;
#define func(x,y) 
class ractangle
{
public:
	double rx, ry, lx, ly, S;
public:
	void setrightpoint(double _rx, double _ry)
	{
		rx = _rx;
		ry = _ry;
	}
	void setleftpoint(double _lx, double _ly)
	{
		lx = _lx;
		ly = _ly;
	}
public:
	double getS()
	{
		S = (lx - rx) * (ly - ry);
		return S;
	}

};
void main()
{
	ractangle t;
	t.setrightpoint(3, 6);
	t.setleftpoint(7, 9);
	double ret = t.getS();
	printf("%lf\n", ret);
}