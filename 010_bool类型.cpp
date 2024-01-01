#include"iostream"
using namespace std;
void main()
{
	bool a = true;
	cout << "sizeof(bool)=" << sizeof(bool) << endl;//bool类型是让编译器分配一个字节的内存；
	a = -10;
	cout << a << endl;//bool变量要么是1；要么是0；非零就转为true，零就转成false；
	a = 0;
	cout << a << endl;
	a = 10;
	cout << a << endl;
}