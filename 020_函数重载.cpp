#include"iostream"
using namespace std;
void func(int a)
{
	printf("%d\n", a);
}
//void func(char const*const p)
//void func(char* p)//err
void func(char const* p)//这里为什么要加const？；
{
	printf("%s\n", p);
}
void func(int a, int b)
{
	printf("%d,%d\n", a, b);
}
void main()
{
	func(1);
	func("aaaaaaaa");
	func(1, 3);
	system("pause");
}