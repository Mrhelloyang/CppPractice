#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class C1{
	int m_cA;
};
struct C2{
	int m_cB;
};
int main()
{
	C1 c1;
	//c1.m_cA=10;//class类默认是私有
	C2 c2;
	//struct 默认权限是公开;
	c2.m_cB = 10;
	return 0;
}