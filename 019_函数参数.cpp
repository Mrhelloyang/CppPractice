#include"iostream"
using namespace std;
void func01(int a, int b, int = 0)
{
	cout << "a=" << a << ";b=" << b << endl;
}
//void main01()
//{
//	func(1, 2);
//	func(1, 2, 3);
//}
//void func(int a=10, int b, int c)//要写默认参数的话，只能写后面
//void func(int a, int b, int c = 10)
void func(int a, int b, int)//站位参数，调用时必须写够参数；
{
	cout << "a=" << a << ";b=" << b << endl;// ";c=" << c << endl;
}
void main()
{
	//func(1, 2);
	func(1, 2, 3);
}