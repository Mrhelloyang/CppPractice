#include"iostream"
using namespace std;
void myswap(int& a, int& b)//引用做参数不用初始化
{
	int c;
	c = a;
	a = b;
	b = c;
}
void main()
{
	//语法规则int&name=vur;
	//name就是vur的别名，公用一块内存；
	int x, y;
	x = 18;
	y = 20;
	myswap(x, y);
	printf("x=%d,y=%d\n", x, y);
}