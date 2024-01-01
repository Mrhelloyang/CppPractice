#include"iostream"
using namespace std;

void fun1()
{
	#define a 2300//#define修饰的是全局变量；修饰的是这后面所有的a；
	const int b = 20;
	//#undef a//去掉a的宏定义//#undef去掉所有宏定义,作用域在写的后面不使用这个宏定义了；
}

void fun2()
{


	printf("%d\n", a);
	//printf("%d\n", b);//err,b是局部变量

}
void main()
{
//#define a 2300//err,作用域在这个后面；编译已经初始化了

	fun1();//需要写在main的前面；
	fun2();
}