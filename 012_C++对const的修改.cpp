#include"iostream"
using namespace std;
void main()
{
	int const a = 10;//这个定义到符号表里面
	int* p = NULL;//const修饰的变量是全局变量被其他文件引用和&时分配空间；
	//p = (int*)&a;//再分配一块内存
	*p = 20;//对那块内存进行赋值
	printf("%d,%d\n", a, *p);
}