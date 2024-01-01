#include"iostream"
using namespace std;

class Circle
{
public:
	double r;
	double pi = 3.1415926;
	double area = pi * r * r;
};


int main()
{
	Circle c1;//这个类在编译的时候已经初试化了，r为任意值，area也是任意值；
	cout << "please input your r" << endl;
	cin >> c1.r;
	cout << c1.area;//所以这一步把上面的任意值输出了，并没有执行pi*r*r；
	system("pause");
	return 0;
}