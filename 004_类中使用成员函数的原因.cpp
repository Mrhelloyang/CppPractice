#include"iostream"
using namespace std;

class Circle
{
public:
	double r;
	double pi = 3.1415926;
	double area = pi * r * r;
	double getS()//类的成员函数只有在调用的时候才执行；初试化的时候不执行；
	{
		area =pi * r * r;//这一步把类中的area改了；
		return area;
	}
};


int main()
{
	Circle c1;
	cout << "please input your r" << endl;
	cin >> c1.r;
	cout << c1.area << endl;//err

	cout << c1.getS() << endl;//true

	cout << c1.area << endl;//true,这个是更改后的area；
	system("pause");
	return 0;
}