#include"iostream"
using namespace std;
int b = 11;
int func1()
{
	int a;
	a = 10;
	return a;
}
int& func2()//这里的返回值类型要和下面调用返回类型相同
{
	int a;
	a = 10;
	return b;
}
void main()
{
	int a1 = 19;
	int a2;
	a1 = func1();
	printf("%d\n", a1);

	a2 = func2();
	printf("%d\n", a2);

	//int& a3 = func2();//函数返回值是引用时，不能是其他引用的初始值，返回值是局部变量，用为函数调用完自动释放空间；
	//printf("%d\n", a3);//也不能是左值，常量不能赋值
	func2() = 10;////但是为静态变量和全局变量，就可以为其他引用的初始值，也可以做左值；
	printf("%d\n", b);//把a改为了b；
	//printf("%d\n", a3);

}