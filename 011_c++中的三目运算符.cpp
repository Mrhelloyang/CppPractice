#include"iostream"
using namespace std;
void main()
{
	int a = 10;
	int b = 20;
	//a < b ? a : b = 30;//这个是什么情况呢？
	(a < b ? a : b) = 30;//这个()必须加上；c++中返回式返回变量本身；
	printf("%d,%d\n", a, b);//返回式返回的是变量本身；相当c++编译器帮做了*(a < b ? &a : &b) = 30；
	*(a < b ? &a : &b) = 33;
	printf("%d,%d\n", a, b);
}