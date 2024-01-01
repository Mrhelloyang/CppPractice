#include"iostream"
using namespace std;
void main()
{
	register int a = 12;
	printf("&a:%d\n", &a);//C语言中register不能取得变量的地址；
	system("pause");
}