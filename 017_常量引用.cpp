#include"iostream"
using namespace std;
void main()
{
	int x = 10;
	const int& y = x;//y只读x，不能修改，x还可以修改自己；
	//y = 20;printf("%d\n",y);//err
	x = 20;
	printf("%d\n", y);
	//int& m = 30;//常量没有地址，无法引用
	const int& m = 30;//相当于再分配一块内存放m的值；
	printf("%d\n", m);

}